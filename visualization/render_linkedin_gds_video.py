from pathlib import Path
import math
import os
import shutil
import subprocess
import numpy as np
from PIL import Image

W, H = 720, 900
FPS, DURATION = 24, 20
FRAMES = FPS * DURATION
HERE = Path(__file__).resolve().parent
FFMPEG = os.environ.get("FFMPEG") or shutil.which("ffmpeg")
if not FFMPEG:
    raise SystemExit("ffmpeg was not found. Install it or set the FFMPEG environment variable.")
OUT = Path(os.environ.get("OUTPUT_VIDEO", HERE / "output/BNN_Core_GDS_Slow_Layer_Orbit.mp4"))
OUT.parent.mkdir(parents=True, exist_ok=True)

LAYER_SPECS = [
    ("li1", "LI1", "LOCAL INTERCONNECT", (174, 174, 170)),
    ("met1", "M1", "LOCAL ROUTING", (235, 235, 230)),
    ("via1", "V1", "M1 → M2", (128, 128, 124)),
    ("met2", "M2", "VERTICAL ROUTING", (224, 217, 197)),
    ("via2", "V2", "M2 → M3", (137, 132, 120)),
    ("met3", "M3", "HORIZONTAL ROUTING", (220, 196, 167)),
    ("via3", "V3", "M3 → M4", (139, 122, 102)),
    ("met4", "M4", "UPPER ROUTING", (205, 168, 132)),
    ("via4", "V4", "M4 → M5", (130, 104, 79)),
    ("met5", "M5", "TOP METAL", (232, 188, 107)),
]

textures = []
for key, label, desc, color in LAYER_SPECS:
    im = Image.open(HERE / "gds-layer-textures" / f"{key}.webp").convert("RGBA")
    textures.append(im.resize((620, 620), Image.Resampling.LANCZOS))

def clamp(x, a=0.0, b=1.0): return max(a, min(b, x))
def smooth(x):
    x = clamp(x)
    return x * x * (3 - 2 * x)
def ease_out(x):
    x = clamp(x)
    return 1 - (1 - x) ** 3
def pulse(x): return math.sin(clamp(x) * math.pi)

def rotation(rx, ry, rz):
    ax, ay, az = map(math.radians, (rx, ry, rz))
    cx, sx = math.cos(ax), math.sin(ax)
    cy, sy = math.cos(ay), math.sin(ay)
    cz, sz = math.cos(az), math.sin(az)
    Rx = np.array([[1,0,0],[0,cx,-sx],[0,sx,cx]], dtype=float)
    Ry = np.array([[cy,0,sy],[0,1,0],[-sy,0,cy]], dtype=float)
    Rz = np.array([[cz,-sz,0],[sz,cz,0],[0,0,1]], dtype=float)
    return Ry @ Rx @ Rz

def project(points, R, scale=1.0, center=(360, 465)):
    p = points @ R.T
    camera = 5.3
    denom = camera - p[:,2]
    f = 1500 * scale
    x = center[0] + f * p[:,0] / denom
    y = center[1] + f * p[:,1] / denom
    return np.stack([x, y], axis=1), p[:,2]

def perspective_coeffs(src, dst):
    # H maps source -> destination. PIL needs inverse mapping destination -> source.
    A = []
    for (x, y), (u, v) in zip(src, dst):
        A.append([x,y,1,0,0,0,-u*x,-u*y,-u])
        A.append([0,0,0,x,y,1,-v*x,-v*y,-v])
    _, _, vh = np.linalg.svd(np.asarray(A, dtype=float))
    Hm = vh[-1].reshape(3,3)
    Hm /= Hm[2,2]
    inv = np.linalg.inv(Hm)
    inv /= inv[2,2]
    return tuple(inv.flatten()[:8])

def background(frame_index):
    # A neutral background keeps every visible pixel focused on GDS geometry.
    return Image.new("RGBA", (W, H), (5, 5, 5, 255))

def phase_state(t):
    # A deliberately slow, text-free camera tour.
    # Returns separation, x/y/z camera angles, focused layer and ghost opacity.
    if t < 2.5:
        p=smooth(t/2.5)
        return .025, 12+34*p, -10+17*p, -20+34*p, None, 1.0

    if t < 12.5:
        slot=min(9, int(t-2.5))
        local=t-(2.5+slot)
        journey=(slot+smooth(local))/10.0
        rx=22+42*(0.5-0.5*math.cos(journey*math.pi))
        ry=13*math.sin(journey*math.pi*2.0)
        rz=-25+128*journey
        return .145, rx, ry, rz, slot, .045

    if t < 16.5:
        p=smooth((t-12.5)/4.0)
        rx=64+14*math.sin(p*math.pi*1.15)
        ry=-14+28*p
        rz=103+92*p
        return .145, rx, ry, rz, None, 1.0

    p=smooth((t-16.5)/3.5)
    rx=72-39*p
    ry=14-20*p
    rz=195+58*p
    return .145-.118*p, rx, ry, rz, None, 1.0

def compose(frame_index):
    t=frame_index/FPS
    sep, rx, ry, rz, focus, ghost_opacity = phase_state(t)
    R=rotation(rx,ry,rz)
    canvas=background(frame_index)

    src=np.array([[0,0],[619,0],[619,619],[0,619]],dtype=float)
    corner_xy=np.array([[-1,-1],[1,-1],[1,1],[-1,1]],dtype=float)
    order=[]
    for i in range(len(textures)):
        z=(i-4.5)*sep
        pts=np.column_stack([corner_xy,np.full(4,z)])
        dst,depth=project(pts,R,.98)
        order.append((float(depth.mean()),i,dst))
    order.sort(key=lambda x:x[0])

    for _,i,dst in order:
        opacity=1.0 if focus is None else (1.0 if i==focus else ghost_opacity)
        if i in (2,4,6,8): opacity*=.57
        layer=textures[i].copy()
        if opacity<1:
            a=layer.getchannel("A").point(lambda p,o=opacity:int(p*o))
            layer.putalpha(a)
        coeff=perspective_coeffs(src,dst)
        warped=layer.transform((W,H),Image.Transform.PERSPECTIVE,coeff,Image.Resampling.BICUBIC)
        canvas.alpha_composite(warped)

    return canvas.convert("RGB")

sample_frame = os.environ.get("SAMPLE_FRAME")
if sample_frame is not None:
    sample_out = Path(os.environ.get("SAMPLE_OUTPUT", HERE / "output/layout-only-preview.png"))
    sample_out.parent.mkdir(parents=True, exist_ok=True)
    compose(int(sample_frame)).save(sample_out)
    print(sample_out.resolve())
    raise SystemExit(0)

cmd=[FFMPEG,"-y","-f","rawvideo","-pix_fmt","rgb24","-s",f"{W}x{H}","-r",str(FPS),"-i","-","-an","-vf","scale=1080:1350:flags=lanczos","-c:v","libx264","-preset","medium","-crf","18","-pix_fmt","yuv420p","-movflags","+faststart",str(OUT)]
proc=subprocess.Popen(cmd,stdin=subprocess.PIPE,stderr=subprocess.PIPE)
try:
    for frame in range(FRAMES):
        proc.stdin.write(compose(frame).tobytes())
        if frame % 48 == 0: print(f"frame {frame}/{FRAMES}", flush=True)
    proc.stdin.close()
    err=proc.stderr.read().decode("utf-8",errors="replace")
    code=proc.wait()
finally:
    if proc.stdin and not proc.stdin.closed: proc.stdin.close()
if code != 0:
    raise SystemExit(err[-4000:])
print(OUT.resolve())
print(OUT.stat().st_size)

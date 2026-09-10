from pathlib import Path
import math
import os
import shutil
import subprocess
import numpy as np
from PIL import Image, ImageDraw, ImageFilter

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
    ("li1", "LI1", "LOCAL INTERCONNECT", (0, 245, 255)),
    ("met1", "M1", "LOCAL ROUTING", (0, 205, 255)),
    ("via1", "V1", "M1 → M2", (122, 244, 255)),
    ("met2", "M2", "VERTICAL ROUTING", (76, 117, 255)),
    ("via2", "V2", "M2 → M3", (164, 177, 255)),
    ("met3", "M3", "HORIZONTAL ROUTING", (164, 79, 255)),
    ("via3", "V3", "M3 → M4", (222, 168, 255)),
    ("met4", "M4", "UPPER ROUTING", (255, 56, 172)),
    ("via4", "V4", "M4 → M5", (255, 174, 219)),
    ("met5", "M5", "TOP METAL", (255, 190, 47)),
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

# Deterministic star field.
rng = np.random.default_rng(7)
stars = [(int(x), int(y), int(a)) for x,y,a in zip(rng.integers(0,W,90), rng.integers(0,H,90), rng.integers(12,58,90))]

def background(frame_index):
    yy, xx = np.mgrid[0:H,0:W]
    d = np.sqrt(((xx-W*.49)/(W*.78))**2 + ((yy-H*.48)/(H*.76))**2)
    glow = np.clip(1-d,0,1)[...,None]
    base = np.zeros((H,W,3),dtype=np.float32)
    base[:] = (2,5,8)
    base += glow * np.array([7,22,35])
    im = Image.fromarray(np.clip(base,0,255).astype(np.uint8),"RGB").convert("RGBA")
    dr = ImageDraw.Draw(im,"RGBA")
    for x,y,a in stars:
        flicker = .7 + .3*math.sin(frame_index*.035+x*.03)
        dr.ellipse((x,y,x+1,y+1),fill=(90,205,255,int(a*flicker)))
    # Fine scan lines.
    for y in range(0,H,6): dr.line((0,y,W,y),fill=(55,180,220,5),width=1)
    return im

def draw_grid(canvas, R, z=-.76):
    dr=ImageDraw.Draw(canvas,"RGBA")
    for i in range(-6,7):
        a=np.array([[i/6*1.42,-1.42,z],[i/6*1.42,1.42,z]])
        q,_=project(a,R,.98)
        dr.line(tuple(q.flatten()),fill=(52,182,220,22),width=1)
        b=np.array([[-1.42,i/6*1.42,z],[1.42,i/6*1.42,z]])
        q,_=project(b,R,.98)
        dr.line(tuple(q.flatten()),fill=(52,182,220,22),width=1)

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
    draw_grid(canvas,R)

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
        if opacity>.2:
            glow=warped.filter(ImageFilter.GaussianBlur(6))
            ga=glow.getchannel("A").point(lambda p:int(p*.28))
            glow.putalpha(ga)
            canvas.alpha_composite(glow)
        canvas.alpha_composite(warped)
        dr=ImageDraw.Draw(canvas,"RGBA")
        poly=[tuple(p) for p in dst]
        dr.line(poly+[poly[0]],fill=LAYER_SPECS[i][3]+(int(72*opacity),),width=1)

    return canvas.convert("RGB")

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

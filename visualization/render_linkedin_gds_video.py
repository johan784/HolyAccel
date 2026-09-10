from pathlib import Path
import math
import os
import shutil
import subprocess
import numpy as np
from PIL import Image

W, H = 720, 900
FPS, DURATION = 24, 24
FRAMES = FPS * DURATION
HERE = Path(__file__).resolve().parent
FFMPEG = os.environ.get("FFMPEG") or shutil.which("ffmpeg")
if not FFMPEG:
    raise SystemExit("ffmpeg was not found. Install it or set the FFMPEG environment variable.")
OUT = Path(os.environ.get("OUTPUT_VIDEO", HERE / "output/BNN_Core_GDS_Slow_Layer_Orbit.mp4"))
OUT.parent.mkdir(parents=True, exist_ok=True)

LAYER_SPECS = [
    ("li1", "LI1", "LOCAL INTERCONNECT", (174, 178, 181)),
    ("met1", "M1", "LOCAL ROUTING", (92, 157, 160)),
    ("via1", "V1", "M1 → M2", (145, 145, 138)),
    ("met2", "M2", "VERTICAL ROUTING", (132, 167, 119)),
    ("via2", "V2", "M2 → M3", (142, 139, 116)),
    ("met3", "M3", "HORIZONTAL ROUTING", (207, 169, 83)),
    ("via3", "V3", "M3 → M4", (151, 119, 83)),
    ("met4", "M4", "UPPER ROUTING", (195, 108, 76)),
    ("via4", "V4", "M4 → M5", (143, 88, 77)),
    ("met5", "M5", "TOP METAL", (179, 94, 126)),
]

# Each via is shown together with the metal layer it connects upward into.
LAYER_GROUPS = [(0, 1), (2, 3), (4, 5), (6, 7), (8, 9)]

textures = []
for key, label, desc, color in LAYER_SPECS:
    im = Image.open(HERE / "gds-layer-textures" / f"{key}.webp").convert("RGBA")
    textures.append(im.resize((620, 620), Image.Resampling.LANCZOS))

def clamp(x, a=0.0, b=1.0): return max(a, min(b, x))
def smooth(x):
    x = clamp(x)
    return x * x * (3 - 2 * x)
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
    """Return separation, camera angles, and one opacity per GDS layer."""
    all_layers = [0.54 if i % 2 else 0.44 for i in range(len(textures))]

    # 0–2.4 s: recognizable top-down view of the complete routed layout.
    if t < 2.4:
        p = smooth(t / 2.4)
        return 0.0, 2.0 + 2.0 * p, 0.0, -4.0 + 4.0 * p, all_layers

    # 2.4–3.0 s: remove every layer except LI1 + M1.
    if t < 3.0:
        p = smooth((t - 2.4) / 0.6)
        target = [1.0 if i in LAYER_GROUPS[0] else 0.0 for i in range(len(textures))]
        opacity = [a * (1.0 - p) + b * p for a, b in zip(all_layers, target)]
        return 0.0, 4.0 + 2.0 * p, 0.0, opacity_camera_z(t), opacity

    # 3–13 s: five two-second stages. Other layers are fully hidden, with a
    # short cross-fade to the next via + metal pair at the end of each stage.
    if t < 13.0:
        position = (t - 3.0) / 2.0
        group = min(4, int(position))
        local = position - group
        opacity = [0.0] * len(textures)
        if local < 0.78 or group == 4:
            for i in LAYER_GROUPS[group]:
                opacity[i] = 1.0
        else:
            p = smooth((local - 0.78) / 0.22)
            for i in LAYER_GROUPS[group]:
                opacity[i] = 1.0 - p
            for i in LAYER_GROUPS[group + 1]:
                opacity[i] = p
        journey = (t - 3.0) / 10.0
        rx = 6.0 + 7.0 * math.sin(journey * math.pi)
        ry = 3.0 * math.sin(journey * math.pi * 2.0)
        rz = 3.0 + 14.0 * journey
        return 0.006, rx, ry, rz, opacity

    # 13–18.5 s: reveal the complete stack, then separate it gently.
    if t < 18.5:
        p = smooth((t - 13.0) / 5.5)
        last_group = [1.0 if i in LAYER_GROUPS[-1] else 0.0 for i in range(len(textures))]
        opacity = [a * (1.0 - p) + b * p for a, b in zip(last_group, all_layers)]
        return 0.006 + 0.084 * p, 13.0 + 25.0 * p, 3.0 - 6.0 * p, 17.0 + 24.0 * p, opacity

    # 18.5–24 s: collapse the stack and return to the true top-down view.
    p = smooth((t - 18.5) / 5.5)
    return 0.09 * (1.0 - p), 38.0 * (1.0 - p), -3.0 * (1.0 - p), 41.0 * (1.0 - p), all_layers

def opacity_camera_z(t):
    # Kept separate to make the top-down transition explicit and easy to tune.
    return 2.0 * smooth((t - 2.4) / 0.6)

def compose(frame_index):
    t=frame_index/FPS
    sep, rx, ry, rz, opacities = phase_state(t)
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
        opacity = opacities[i]
        if opacity <= 0.0:
            continue
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

import argparse
from pathlib import Path
from PIL import Image, ImageEnhance

HERE = Path(__file__).resolve().parent
parser = argparse.ArgumentParser(description="Convert GDS layer masks into transparent textures.")
parser.add_argument("--input", type=Path, default=HERE / "gds-layer-renders")
parser.add_argument("--output", type=Path, default=HERE / "gds-layer-textures")
args = parser.parse_args()
src = args.input
dst = args.output
dst.mkdir(parents=True, exist_ok=True)

colors = {
    # GDS carries geometry, not display colors. These restrained display colors
    # distinguish routing levels without creating an artificial overall theme.
    "li1": (174, 178, 181),
    "met1": (92, 157, 160),
    "via1": (145, 145, 138),
    "met2": (132, 167, 119),
    "via2": (142, 139, 116),
    "met3": (207, 169, 83),
    "via3": (151, 119, 83),
    "met4": (195, 108, 76),
    "via4": (143, 88, 77),
    "met5": (179, 94, 126),
}

for name, color in colors.items():
    gray = Image.open(src / f"{name}.png").convert("L")
    # Remove the black background while keeping real routed geometry crisp.
    alpha = gray.point(lambda p: 0 if p < 18 else min(255, int((p - 18) * 1.45)))
    alpha = ImageEnhance.Contrast(alpha).enhance(1.35)
    rgba = Image.new("RGBA", gray.size, color + (0,))
    rgba.putalpha(alpha)
    rgba.save(dst / f"{name}.webp", "WEBP", lossless=True, method=6)

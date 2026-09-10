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
    # GDS carries geometry, not display colors.  Use a neutral material palette
    # so the video reads as layout geometry instead of a themed infographic.
    "li1": (174, 174, 170),
    "met1": (235, 235, 230),
    "via1": (128, 128, 124),
    "met2": (224, 217, 197),
    "via2": (137, 132, 120),
    "met3": (220, 196, 167),
    "via3": (139, 122, 102),
    "met4": (205, 168, 132),
    "via4": (130, 104, 79),
    "met5": (232, 188, 107),
}

for name, color in colors.items():
    gray = Image.open(src / f"{name}.png").convert("L")
    # Remove the black background while keeping real routed geometry crisp.
    alpha = gray.point(lambda p: 0 if p < 18 else min(255, int((p - 18) * 1.45)))
    alpha = ImageEnhance.Contrast(alpha).enhance(1.35)
    rgba = Image.new("RGBA", gray.size, color + (0,))
    rgba.putalpha(alpha)
    rgba.save(dst / f"{name}.webp", "WEBP", lossless=True, method=6)

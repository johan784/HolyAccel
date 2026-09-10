import argparse
from pathlib import Path
from PIL import Image, ImageEnhance, ImageFilter

HERE = Path(__file__).resolve().parent
parser = argparse.ArgumentParser(description="Convert GDS layer masks into transparent textures.")
parser.add_argument("--input", type=Path, default=HERE / "gds-layer-renders")
parser.add_argument("--output", type=Path, default=HERE / "gds-layer-textures")
args = parser.parse_args()
src = args.input
dst = args.output
dst.mkdir(parents=True, exist_ok=True)

colors = {
    "li1": (0, 245, 255),
    "met1": (0, 205, 255),
    "via1": (122, 244, 255),
    "met2": (76, 117, 255),
    "via2": (164, 177, 255),
    "met3": (164, 79, 255),
    "via3": (222, 168, 255),
    "met4": (255, 56, 172),
    "via4": (255, 174, 219),
    "met5": (255, 190, 47),
}

for name, color in colors.items():
    gray = Image.open(src / f"{name}.png").convert("L")
    # Remove the black background while keeping real routed geometry crisp.
    alpha = gray.point(lambda p: 0 if p < 18 else min(255, int((p - 18) * 1.45)))
    alpha = ImageEnhance.Contrast(alpha).enhance(1.35)
    rgba = Image.new("RGBA", gray.size, color + (0,))
    rgba.putalpha(alpha)
    rgba.save(dst / f"{name}.webp", "WEBP", lossless=True, method=6)
    # A blurred companion creates a controlled neon bloom behind each layer.
    bloom = Image.new("RGBA", gray.size, color + (0,))
    bloom.putalpha(alpha.filter(ImageFilter.GaussianBlur(2.2)).point(lambda p: int(p * 0.38)))
    bloom.save(dst / f"{name}-glow.webp", "WEBP", lossless=True, method=6)

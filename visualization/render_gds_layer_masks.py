import argparse
from pathlib import Path
import pya

HERE = Path(__file__).resolve().parent
parser = argparse.ArgumentParser(description="Render individual routing masks from a GDS file.")
parser.add_argument("gds", type=Path, help="Input GDS containing the routed design")
parser.add_argument("--output", type=Path, default=HERE / "gds-layer-renders")
parser.add_argument("--size", type=int, default=900, help="Square image size in pixels")
args = parser.parse_args()
args.output.mkdir(parents=True, exist_ok=True)

targets = [
    ("li1", 67, {0, 16, 20}),
    ("met1", 68, {0, 16, 20}),
    ("via1", 68, {44}),
    ("met2", 69, {0, 16, 20}),
    ("via2", 69, {44}),
    ("met3", 70, {0, 16, 20}),
    ("via3", 70, {44}),
    ("met4", 71, {0, 16, 20}),
    ("via4", 71, {44}),
    ("met5", 72, {0, 16, 20}),
]

view = pya.LayoutView()
view.load_layout(str(args.gds), 0)
view.add_missing_layers()
view.max_hier()
view.set_config("background-color", "#000000")
view.set_config("grid-visible", "false")
view.set_config("text-visible", "false")
view.set_config("guiding-shapes-visible", "false")
view.zoom_fit()

nodes = list(view.each_layer())
print("Layer nodes:", len(nodes))

for name, layer_num, datatypes in targets:
    matched = 0
    for node in nodes:
        enabled = node.source_layer == layer_num and node.source_datatype in datatypes
        node.visible = enabled
        if enabled:
            matched += 1
            node.fill_color = 0xFFFFFF
            node.frame_color = 0xFFFFFF
    view.save_image(str(args.output / f"{name}.png"), args.size, args.size)
    print(name, "matched", matched)

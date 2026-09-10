import pya
import os

base = os.getcwd()

layout = pya.Layout()
opts = pya.LoadLayoutOptions()
opts.lefdef_config.lef_files = [
    os.path.join(base, "pdk/sky130_fd_sc_hd__max.tlef"),
    os.path.join(base, "pdk/sky130_fd_sc_hd.lef"),
]
layout.read(os.path.join(base, "out/processing_element.def"), opts)
layout.write(os.path.join(base, "out/processing_element.gds"))
print("PE GDS written")

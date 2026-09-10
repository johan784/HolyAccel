# GDS layer visualization

This pipeline turns the actual LI1–M5 and via masks from `bnn_core_final.gds` into an interactive 3D layer explorer and a text-free 24-second layer tour. The video begins with the complete top-down layout, isolates one routing group at a time (`LI1 + M1`, then each via with the metal above it), gently reveals and explodes the full stack, and finally collapses back into the top-down GDS. The background is neutral black with no grid, stars, scan lines, labels, artificial plane borders, or neon bloom: every visible foreground shape comes from extracted GDS geometry. Display colors and vertical layer separation are illustrative because GDS stores geometry rather than physical color or height.

## Dependencies

- KLayout with Python support (`pya`)
- Python 3
- Pillow and NumPy
- FFmpeg

## Generate the assets

Run from the repository root:

```bash
GDS_INPUT="$PWD/out/bnn_core_final.gds" \
  klayout -z -nc -r visualization/render_gds_layer_masks.py
python3 visualization/prepare_gds_textures.py
python3 visualization/build_gds_stack_visualization.py
python3 visualization/render_linkedin_gds_video.py
```

The first step renders one monochrome mask per physical layer. The second converts those masks into transparent colored textures. The final two commands reuse the textures to build the interactive explorer and the cinematic video.

Set `FFMPEG=/path/to/ffmpeg` if FFmpeg is not on `PATH`. Set `OUTPUT_VIDEO=/path/to/output.mp4` to override the default video location.

The repository includes a compressed preview under `docs/assets/`; the full-resolution GDS and rendered intermediates are intentionally not tracked.

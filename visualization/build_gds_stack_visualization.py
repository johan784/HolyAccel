import argparse
from pathlib import Path
import base64

HERE = Path(__file__).resolve().parent
parser = argparse.ArgumentParser(description="Build an interactive 3D GDS layer explorer.")
parser.add_argument("--textures", type=Path, default=HERE / "gds-layer-textures")
parser.add_argument("--output", type=Path, default=HERE / "bnn-gds-layer-explorer.html")
args = parser.parse_args()
texture_dir = args.textures
output = args.output
output.parent.mkdir(parents=True, exist_ok=True)

layers = [
    ("li1", "LI1", "local interconnect", "#00f5ff", 0, False),
    ("met1", "M1", "local routing", "#00cdff", 1, False),
    ("via1", "V1", "M1 → M2", "#7af4ff", 2, True),
    ("met2", "M2", "vertical routing", "#4c75ff", 3, False),
    ("via2", "V2", "M2 → M3", "#a4b1ff", 4, True),
    ("met3", "M3", "horizontal routing", "#a44fff", 5, False),
    ("via3", "V3", "M3 → M4", "#dea8ff", 6, True),
    ("met4", "M4", "upper routing", "#ff38ac", 7, False),
    ("via4", "V4", "M4 → M5", "#ffaedb", 8, True),
    ("met5", "M5", "top metal", "#ffbe2f", 9, False),
]

def uri(name):
    data = base64.b64encode((texture_dir / f"{name}.webp").read_bytes()).decode("ascii")
    return f"data:image/webp;base64,{data}"

planes = []
legend = []
for key, label, desc, color, index, is_via in layers:
    planes.append(
        f'<div class="gds-plane {"via-plane" if is_via else "metal-plane"}" '
        f'data-layer="{key}" data-index="{index}" style="--layer-color:{color};">'
        f'<img draggable="false" alt="{label} geometry extracted from bnn_core_final.gds" src="{uri(key)}">'
        f'<div class="edge-glow"></div></div>'
    )
    legend.append(
        f'<button type="button" class="layer-key" data-focus="{key}" aria-pressed="false">'
        f'<span class="swatch" style="--swatch:{color}"></span>'
        f'<span class="key-label">{label}</span><span class="key-desc">{desc}</span></button>'
    )

template = r'''<div id="bnn-gds-explorer" class="gds-explorer">
  <style>
    #bnn-gds-explorer { --fg:#eaf8ff; --muted:#7f99a9; --panel:rgba(4,12,19,.82); --line:rgba(125,221,255,.18); position:relative; height:720px; overflow:hidden; border-radius:18px; background:radial-gradient(circle at 50% 42%,#102438 0,#071018 38%,#020508 76%); color:var(--fg); font-family:Inter,ui-sans-serif,system-ui,-apple-system,sans-serif; user-select:none; }
    #bnn-gds-explorer::before { content:""; position:absolute; inset:-40%; background-image:linear-gradient(rgba(50,170,220,.055) 1px,transparent 1px),linear-gradient(90deg,rgba(50,170,220,.055) 1px,transparent 1px); background-size:42px 42px; transform:perspective(700px) rotateX(66deg) translateY(42%); mask-image:linear-gradient(to top,black,transparent 78%); }
    #bnn-gds-explorer .scan { position:absolute; inset:0; pointer-events:none; background:linear-gradient(transparent 49.5%,rgba(79,225,255,.065) 50%,transparent 50.5%); background-size:100% 7px; opacity:.34; mix-blend-mode:screen; }
    #bnn-gds-explorer .topbar { position:absolute; z-index:20; left:24px; right:24px; top:20px; display:flex; align-items:flex-start; justify-content:space-between; pointer-events:none; }
    #bnn-gds-explorer .eyebrow { color:#4fe9ff; font:600 11px/1.2 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.2em; text-transform:uppercase; }
    #bnn-gds-explorer h2 { margin:7px 0 0; font-size:24px; line-height:1.1; letter-spacing:-.03em; font-weight:650; }
    #bnn-gds-explorer .chip-meta { text-align:right; color:var(--muted); font:500 11px/1.7 ui-monospace,SFMono-Regular,Menlo,monospace; }
    #bnn-gds-explorer .chip-meta b { color:#dff8ff; font-weight:600; }
    #bnn-gds-explorer .viewport { position:absolute; inset:72px 176px 84px 10px; perspective:1150px; cursor:grab; touch-action:none; }
    #bnn-gds-explorer .viewport.dragging { cursor:grabbing; }
    #bnn-gds-explorer .stage { position:absolute; left:50%; top:50%; width:min(66vw,570px); height:min(66vw,570px); transform-style:preserve-3d; transform:translate(-50%,-50%) rotateX(61deg) rotateZ(-32deg) scale(.86); transition:transform .8s cubic-bezier(.2,.8,.2,1); will-change:transform; }
    #bnn-gds-explorer .stage.dragging { transition:none; }
    #bnn-gds-explorer .gds-plane { position:absolute; inset:0; transform-style:preserve-3d; transform:translateZ(var(--z,0px)); opacity:.76; transition:transform 1s cubic-bezier(.16,1,.3,1),opacity .6s ease,filter .6s ease; pointer-events:none; }
    #bnn-gds-explorer .gds-plane img { width:100%; height:100%; object-fit:contain; display:block; filter:drop-shadow(0 0 4px var(--layer-color)) drop-shadow(0 0 9px color-mix(in srgb,var(--layer-color) 55%,transparent)); }
    #bnn-gds-explorer .gds-plane .edge-glow { position:absolute; inset:2.6%; border:1px solid color-mix(in srgb,var(--layer-color) 48%,transparent); box-shadow:inset 0 0 18px color-mix(in srgb,var(--layer-color) 12%,transparent),0 0 12px color-mix(in srgb,var(--layer-color) 10%,transparent); }
    #bnn-gds-explorer .via-plane { opacity:.42; }
    #bnn-gds-explorer.focused .gds-plane { opacity:.07; filter:saturate(.35); }
    #bnn-gds-explorer.focused .gds-plane.is-focus { opacity:1; filter:saturate(1.2) brightness(1.25); }
    #bnn-gds-explorer .sidepanel { position:absolute; z-index:30; right:18px; top:86px; width:172px; padding:12px 10px; border:1px solid var(--line); border-radius:14px; background:var(--panel); backdrop-filter:blur(14px); box-shadow:0 16px 50px rgba(0,0,0,.32); }
    #bnn-gds-explorer .stack-label { padding:2px 8px 10px; color:#7fdaeb; font:600 10px/1 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.15em; }
    #bnn-gds-explorer .layer-key { width:100%; display:grid; grid-template-columns:9px 30px 1fr; gap:7px; align-items:center; border:0; padding:7px 8px; color:var(--muted); background:transparent; text-align:left; cursor:pointer; border-radius:7px; transition:background .2s,color .2s,transform .2s; }
    #bnn-gds-explorer .layer-key:hover { background:rgba(110,222,255,.08); color:#e9fbff; transform:translateX(-2px); }
    #bnn-gds-explorer .layer-key[aria-pressed="true"] { background:rgba(110,222,255,.12); color:#fff; }
    #bnn-gds-explorer .swatch { width:7px; height:7px; border-radius:50%; background:var(--swatch); box-shadow:0 0 9px var(--swatch); }
    #bnn-gds-explorer .key-label { font:650 11px/1 ui-monospace,SFMono-Regular,Menlo,monospace; }
    #bnn-gds-explorer .key-desc { overflow:hidden; white-space:nowrap; text-overflow:ellipsis; font-size:10px; }
    #bnn-gds-explorer .controls { position:absolute; z-index:30; left:22px; right:22px; bottom:18px; display:flex; align-items:center; gap:10px; }
    #bnn-gds-explorer .control-group { display:flex; align-items:center; gap:8px; padding:8px; border:1px solid var(--line); border-radius:12px; background:var(--panel); backdrop-filter:blur(14px); }
    #bnn-gds-explorer button.action { border:1px solid rgba(125,221,255,.16); background:rgba(120,220,255,.06); color:#cceef7; border-radius:8px; padding:8px 11px; font:600 10px/1 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.05em; cursor:pointer; transition:.2s ease; }
    #bnn-gds-explorer button.action:hover,#bnn-gds-explorer button.action[aria-pressed="true"] { color:#fff; border-color:rgba(83,230,255,.5); background:rgba(67,215,255,.14); box-shadow:0 0 18px rgba(40,205,255,.12); }
    #bnn-gds-explorer .range-wrap { min-width:180px; padding:0 7px; }
    #bnn-gds-explorer .range-head { display:flex; justify-content:space-between; margin-bottom:7px; color:#8fa9b7; font:600 9px/1 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.1em; }
    #bnn-gds-explorer input[type="range"] { width:100%; height:3px; appearance:none; border-radius:99px; background:linear-gradient(90deg,#4ce6ff,#b052ff,#ff4ca6); outline:none; }
    #bnn-gds-explorer input[type="range"]::-webkit-slider-thumb { appearance:none; width:13px; height:13px; border-radius:50%; background:#fff; box-shadow:0 0 12px #5ae8ff; cursor:ew-resize; }
    #bnn-gds-explorer .status { margin-left:auto; padding:9px 12px; border-left:1px solid var(--line); color:#718d9d; font:500 9px/1.45 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.04em; }
    #bnn-gds-explorer .status strong { display:block; color:#c8f5ff; font-size:10px; }
    #bnn-gds-explorer .truth { position:absolute; left:24px; bottom:83px; color:#5f7a88; font:500 9px/1.5 ui-monospace,SFMono-Regular,Menlo,monospace; letter-spacing:.03em; }
    @media (max-width:700px) { #bnn-gds-explorer {height:650px} #bnn-gds-explorer .sidepanel{right:10px;width:128px}.key-desc{display:none}.viewport{right:116px!important}.controls{flex-wrap:wrap}.status{display:none}.range-wrap{min-width:132px}.chip-meta{display:none} }
  </style>
  <div class="scan"></div>
  <div class="topbar"><div><div class="eyebrow">physical stack explorer</div><h2>BNN Core · SKY130</h2></div><div class="chip-meta"><b>ACTUAL GDS GEOMETRY</b><br>M1—M5 + VIA STACK<br>bnn_core_final.gds</div></div>
  <div class="viewport" aria-label="Interactive 3D view of the BNN accelerator metal stack. Drag to rotate and scroll to zoom.">
    <div class="stage">{{PLANES}}</div>
  </div>
  <aside class="sidepanel"><div class="stack-label">LAYER STACK</div><button type="button" class="layer-key all-key" data-focus="all" aria-pressed="true"><span class="swatch" style="--swatch:#fff"></span><span class="key-label">ALL</span><span class="key-desc">complete stack</span></button>{{LEGEND}}</aside>
  <div class="truth">Drag to orbit · Scroll to zoom · Layer separation is illustrative</div>
  <div class="controls">
    <div class="control-group"><button type="button" class="action" data-action="tour">▶ TOUR</button><button type="button" class="action" data-action="spin" aria-pressed="true">AUTO ORBIT</button></div>
    <div class="control-group"><button type="button" class="action" data-view="top">TOP</button><button type="button" class="action" data-view="iso">ISO</button><button type="button" class="action" data-view="side">EDGE</button></div>
    <div class="control-group range-wrap"><div style="width:100%"><div class="range-head"><span>EXPLODE</span><span class="gap-value">46 µm*</span></div><input aria-label="Layer separation" type="range" min="10" max="86" value="46"></div></div>
    <div class="status"><strong class="focus-name">FULL METAL STACK</strong><span class="focus-detail">10 physical masks visible</span></div>
  </div>
  <script>
  (() => {
    const root=document.getElementById('bnn-gds-explorer');
    const viewport=root.querySelector('.viewport'), stage=root.querySelector('.stage');
    const planes=[...root.querySelectorAll('.gds-plane')], keys=[...root.querySelectorAll('.layer-key')];
    const range=root.querySelector('input[type="range"]'), gapValue=root.querySelector('.gap-value');
    const nameOut=root.querySelector('.focus-name'), detailOut=root.querySelector('.focus-detail');
    const info={li1:['LI1 · LOCAL INTERCONNECT','transistor-to-cell connections'],met1:['M1 · LOCAL ROUTING','dense standard-cell wiring'],via1:['VIA1','vertical connections from M1 to M2'],met2:['M2 · ROUTING','first major routing layer'],via2:['VIA2','vertical connections from M2 to M3'],met3:['M3 · ROUTING','long horizontal distribution'],via3:['VIA3','vertical connections from M3 to M4'],met4:['M4 · UPPER ROUTING','long-distance signal and power paths'],via4:['VIA4','vertical connections from M4 to M5'],met5:['M5 · TOP METAL','sparse highest-level distribution']};
    let rx=61, rz=-32, zoom=.86, gap=46, dragging=false, px=0, py=0, spinning=true, tourTimer=null;
    const renderCamera=()=>stage.style.transform=`translate(-50%,-50%) rotateX(${rx}deg) rotateZ(${rz}deg) scale(${zoom})`;
    const renderStack=()=>{ planes.forEach((p,i)=>p.style.setProperty('--z',`${(i-4.5)*gap}px`)); gapValue.textContent=`${gap} µm*`; };
    function focus(which){
      const all=which==='all'; root.classList.toggle('focused',!all);
      planes.forEach(p=>p.classList.toggle('is-focus',p.dataset.layer===which));
      keys.forEach(k=>k.setAttribute('aria-pressed',String(k.dataset.focus===which)));
      if(all){nameOut.textContent='FULL METAL STACK';detailOut.textContent='10 physical masks visible';}
      else {nameOut.textContent=info[which][0];detailOut.textContent=info[which][1];}
    }
    keys.forEach(k=>k.addEventListener('click',()=>{clearInterval(tourTimer);tourTimer=null;focus(k.dataset.focus);}));
    range.addEventListener('input',()=>{gap=+range.value;renderStack();});
    viewport.addEventListener('pointerdown',e=>{dragging=true;px=e.clientX;py=e.clientY;viewport.setPointerCapture(e.pointerId);viewport.classList.add('dragging');stage.classList.add('dragging');});
    viewport.addEventListener('pointermove',e=>{if(!dragging)return;rz+=e.clientX-px;rx=Math.max(8,Math.min(84,rx-(e.clientY-py)*.55));px=e.clientX;py=e.clientY;renderCamera();});
    const endDrag=()=>{dragging=false;viewport.classList.remove('dragging');stage.classList.remove('dragging');};
    viewport.addEventListener('pointerup',endDrag);viewport.addEventListener('pointercancel',endDrag);
    viewport.addEventListener('wheel',e=>{e.preventDefault();zoom=Math.max(.48,Math.min(1.35,zoom-e.deltaY*.0008));renderCamera();},{passive:false});
    root.querySelectorAll('[data-view]').forEach(b=>b.addEventListener('click',()=>{const v=b.dataset.view;if(v==='top'){rx=2;rz=0;zoom=.86;}if(v==='iso'){rx=61;rz=-32;zoom=.86;}if(v==='side'){rx=83;rz=-8;zoom=.72;}renderCamera();}));
    const spinBtn=root.querySelector('[data-action="spin"]');
    spinBtn.addEventListener('click',()=>{spinning=!spinning;spinBtn.setAttribute('aria-pressed',String(spinning));});
    root.querySelector('[data-action="tour"]').addEventListener('click',e=>{if(tourTimer){clearInterval(tourTimer);tourTimer=null;e.currentTarget.textContent='▶ TOUR';focus('all');return;} const order=['li1','met1','met2','met3','met4','met5','all'];let i=0;e.currentTarget.textContent='■ STOP';focus(order[i]);tourTimer=setInterval(()=>{i=(i+1)%order.length;focus(order[i]);},1700);});
    let last=performance.now();function animate(now){if(spinning&&!dragging&&now-last>25){rz+=.055;renderCamera();last=now;}requestAnimationFrame(animate);}requestAnimationFrame(animate);
    renderStack();renderCamera();focus('all');
  })();
  </script>
</div>'''

output.write_text(template.replace("{{PLANES}}", "".join(planes)).replace("{{LEGEND}}", "".join(legend)))
print(output)
print(output.stat().st_size)

from reportlab.lib import colors
from reportlab.lib.enums import TA_LEFT
from reportlab.lib.pagesizes import A4
from reportlab.lib.styles import ParagraphStyle, getSampleStyleSheet
from reportlab.lib.units import mm
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer, Table, TableStyle


OUTPUT = "output/pdf/bnn_controller_change_report.pdf"

styles = getSampleStyleSheet()
styles.add(ParagraphStyle(
    name="ReportTitle", parent=styles["Title"], fontName="Helvetica-Bold",
    fontSize=21, leading=25, textColor=colors.HexColor("#12355B"), spaceAfter=8,
))
styles.add(ParagraphStyle(
    name="ReportSubtitle", parent=styles["Normal"], fontName="Helvetica",
    fontSize=9.5, leading=13, textColor=colors.HexColor("#52616B"), spaceAfter=15,
))
styles.add(ParagraphStyle(
    name="Section", parent=styles["Heading2"], fontName="Helvetica-Bold",
    fontSize=13, leading=16, textColor=colors.HexColor("#12355B"),
    spaceBefore=13, spaceAfter=6,
))
styles.add(ParagraphStyle(
    name="Body", parent=styles["BodyText"], fontName="Helvetica",
    fontSize=9.4, leading=13, alignment=TA_LEFT, spaceAfter=5,
))
styles.add(ParagraphStyle(
    name="Small", parent=styles["BodyText"], fontName="Helvetica",
    fontSize=8.4, leading=11.5, textColor=colors.HexColor("#334E68"),
))

doc = SimpleDocTemplate(
    OUTPUT, pagesize=A4, rightMargin=18*mm, leftMargin=18*mm,
    topMargin=17*mm, bottomMargin=15*mm,
    title="BNN Controller Change Report",
    author="Codex",
)

story = [
    Paragraph("BNN Controller Change Report", styles["ReportTitle"]),
    Paragraph("Implementation summary, validation status, and remaining work", styles["ReportSubtitle"]),
    Paragraph("Overview", styles["Section"]),
    Paragraph(
        "The BNN controller was repaired from a syntactically incomplete mixed-style FSM into "
        "a single-process controller with explicit state transitions. The main dataflow is now "
        "configuration, BRAM priming, activation fetch, weight fetch, compute, output commit, and completion.",
        styles["Body"],
    ),
    Paragraph("Changes implemented", styles["Section"]),
]


def table_paragraphs(rows):
    """Make every cell wrap within its assigned table column."""
    converted = []
    for row_index, row in enumerate(rows):
        style = ParagraphStyle(
            name=f"TableHeader{row_index}" if row_index == 0 else f"TableCell{row_index}",
            parent=styles["Small"],
            fontName="Helvetica-Bold" if row_index == 0 else "Helvetica",
            textColor=colors.white if row_index == 0 else colors.HexColor("#243B53"),
        )
        converted.append([Paragraph(cell, style) for cell in row])
    return converted

changes = [
    ["Area", "Implemented change"],
    ["FSM", "Removed next_state usage and RESET state; introduced a consistent state enum with CONFIGURE_LAYER and WAIT_BRAM."],
    ["Pointers", "Kept host-facing in_ptr, wt_ptr, and thr_ptr as read-only inputs; added internal active-layer pointer registers."],
    ["Syntax and declarations", "Fixed the missing port comma, invalid dual state label, missing declarations, malformed layer-package logic type, and enum width/encoding conflict."],
    ["Data movement", "Implemented activation buffering, per-PE weight buffering, BRAM address progression, synchronous BRAM priming, and output capture."],
    ["Output loop", "Replaced the invalid NUM_PEi/i/j loop with valid indexed procedural output capture."],
    ["Integration", "Added threshold-pointer register support in the AXI-Lite wrapper at offset 0x14 and added layer_pkg.sv to the Makefile source list."],
    ["Numeric range", "Increased accumulator width so the maximum 256-bit XNOR/popcount score can be represented."],
]
table = Table(table_paragraphs(changes), colWidths=[39*mm, 135*mm], repeatRows=1)
table.setStyle(TableStyle([
    ("BACKGROUND", (0, 0), (-1, 0), colors.HexColor("#12355B")),
    ("TEXTCOLOR", (0, 0), (-1, 0), colors.white),
    ("FONTNAME", (0, 0), (-1, 0), "Helvetica-Bold"),
    ("FONTNAME", (0, 1), (0, -1), "Helvetica-Bold"),
    ("FONTNAME", (1, 1), (1, -1), "Helvetica"),
    ("FONTSIZE", (0, 0), (-1, -1), 8.2),
    ("LEADING", (0, 0), (-1, -1), 11),
    ("TEXTCOLOR", (0, 1), (-1, -1), colors.HexColor("#243B53")),
    ("BACKGROUND", (0, 1), (-1, -1), colors.HexColor("#F4F7FA")),
    ("GRID", (0, 0), (-1, -1), 0.35, colors.HexColor("#C8D2DC")),
    ("VALIGN", (0, 0), (-1, -1), "TOP"),
    ("LEFTPADDING", (0, 0), (-1, -1), 6),
    ("RIGHTPADDING", (0, 0), (-1, -1), 6),
    ("TOPPADDING", (0, 0), (-1, -1), 5),
    ("BOTTOMPADDING", (0, 0), (-1, -1), 5),
]))
story.extend([table, Spacer(1, 5*mm)])

story.extend([
    Paragraph("Validation", styles["Section"]),
    Paragraph(
        "Full-SoC lint completed without fatal errors. The remaining lint messages are project-wide "
        "warnings from the PicoRV32 source set and missing timescale declarations, not blocking errors "
        "in the repaired controller.", styles["Body"]),
    Paragraph(
        "Core compilation completed successfully. The deterministic popcount-pattern regression passed. "
        "The current random and latency regressions still expose a BRAM/data-path alignment defect, and "
        "the controller-boundary tests target the old single-PE internal hierarchy and state encodings.",
        styles["Body"]),
    Paragraph("Remaining work", styles["Section"]),
])

remaining = [
    ["Priority", "Item", "Why it remains"],
    ["High", "Resolve BRAM data alignment", "Random-vector and latency tests do not yet match the golden model."],
    ["High", "Update boundary tests", "Existing tests reference removed legacy signals such as dut.pe and inputs_reg."],
    ["Medium", "Add programmable descriptors", "layer_table exists, but no software-visible descriptor storage/load interface populates it."],
    ["Medium", "Implement threshold fetch/compare", "thr_ptr is configured, but no threshold BRAM port, loading logic, or decision stage exists."],
    ["Medium", "Expose output vector", "Only PE zero is mapped to result; output_buffer retains the other PE values internally."],
]
remaining_table = Table(table_paragraphs(remaining), colWidths=[22*mm, 47*mm, 105*mm], repeatRows=1)
remaining_table.setStyle(TableStyle([
    ("BACKGROUND", (0, 0), (-1, 0), colors.HexColor("#8C2F39")),
    ("TEXTCOLOR", (0, 0), (-1, 0), colors.white),
    ("FONTNAME", (0, 0), (-1, 0), "Helvetica-Bold"),
    ("FONTNAME", (0, 1), (-1, -1), "Helvetica"),
    ("FONTSIZE", (0, 0), (-1, -1), 8.2),
    ("LEADING", (0, 0), (-1, -1), 11),
    ("TEXTCOLOR", (0, 1), (-1, -1), colors.HexColor("#243B53")),
    ("BACKGROUND", (0, 1), (-1, -1), colors.HexColor("#FFF7F7")),
    ("GRID", (0, 0), (-1, -1), 0.35, colors.HexColor("#D9C1C4")),
    ("VALIGN", (0, 0), (-1, -1), "TOP"),
    ("LEFTPADDING", (0, 0), (-1, -1), 6),
    ("RIGHTPADDING", (0, 0), (-1, -1), 6),
    ("TOPPADDING", (0, 0), (-1, -1), 5),
    ("BOTTOMPADDING", (0, 0), (-1, -1), 5),
]))
story.extend([remaining_table, Spacer(1, 5*mm)])
story.append(Paragraph(
    "Files changed: bnn_core.sv, fsm_pkg.sv, constants_pkg.sv, layer_pkg.sv, core_processing.sv, axi-lite-wraper.sv, and Makefile.",
    styles["Small"],
))

doc.build(story)

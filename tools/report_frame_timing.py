"""Summarize logged timing windows, not individual frame-time percentiles."""
import argparse
import json
from pathlib import Path
import re
import statistics

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('log', type=Path)
parser.add_argument('--start-line', type=int, default=1)
parser.add_argument('--end-line', type=int)
parser.add_argument('--min-vertices', type=int, default=0)
args = parser.parse_args()
rows = []
for number, line in enumerate(args.log.open(errors='replace'), 1):
    if number < args.start_line or (args.end_line and number > args.end_line):
        continue
    match = re.search(r'\[RASTER-TIMING\] ([\d.]+)s (.*)', line)
    if not match:
        continue
    row = {k: float(v) for k, v in re.findall(r'(\w+)=([\d.]+)', match[2])}
    row['seconds'] = float(match[1])
    if row.get('vertices', 0) < args.min_vertices or row['seconds'] <= 0:
        continue
    row['line'] = number
    row['fps'] = row['flips'] / row['seconds']
    rows.append(row)
if not rows:
    raise SystemExit('No timing windows match the selection.')
report = {
    'log': str(args.log.resolve()),
    'selection': {'start_line': args.start_line, 'end_line': args.end_line,
                  'min_vertices': args.min_vertices},
    'windows': len(rows),
    'seconds': sum(r['seconds'] for r in rows),
    'flips': int(sum(r['flips'] for r in rows)),
    'weighted_fps': sum(r['flips'] for r in rows) / sum(r['seconds'] for r in rows),
    'median_window_fps': statistics.median(r['fps'] for r in rows),
    'median_vertex_ms_per_window': statistics.median(r['vertex_ms'] for r in rows),
    'median_batches_per_flip': statistics.median(r['batches'] / r['flips'] for r in rows if r['flips']),
    'note': 'These are interval averages. Select matched gameplay and camera before comparing builds.',
    'samples': rows,
}
print(json.dumps(report, indent=2))

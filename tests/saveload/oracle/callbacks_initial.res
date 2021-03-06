[kernel] Parsing tests/saveload/callbacks.i (no preprocessing)
[eva] Analyzing a complete application starting at main1
[eva] Computing initial state
[eva] Initial state computed
[eva:initial-state] Values of globals at initialization
  x ∈ {0}
  y ∈ {0}
[eva] computing for function g1 <- main1.
  Called from tests/saveload/callbacks.i:25.
[eva] computing for function f <- g1 <- main1.
  Called from tests/saveload/callbacks.i:16.
[eva] Recording results for f
[from] Computing for function f
[from] Done for function f
[eva] Done for function f
[eva] Recording results for g1
[from] Computing for function g1
[from] Done for function g1
[eva] Done for function g1
[eva] computing for function g2 <- main1.
  Called from tests/saveload/callbacks.i:26.
[eva] computing for function f <- g2 <- main1.
  Called from tests/saveload/callbacks.i:21.
[eva] Recording results for f
[from] Computing for function f
[from] Done for function f
[eva] Done for function f
[eva] Recording results for g2
[from] Computing for function g2
[from] Done for function g2
[eva] Done for function g2
[eva] Recording results for main1
[from] Computing for function main1
[from] Done for function main1
[eva] done for function main1
[from] ====== DISPLAYING CALLWISE DEPENDENCIES ======
[from] call to f at tests/saveload/callbacks.i:16 (by g1):
  x FROM p
[from] call to f at tests/saveload/callbacks.i:21 (by g2):
  y FROM p
[from] call to g1 at tests/saveload/callbacks.i:25 (by main1):
  x FROM \nothing
[from] call to g2 at tests/saveload/callbacks.i:26 (by main1):
  y FROM \nothing
[from] entry point:
  x FROM \nothing
  y FROM \nothing
[from] ====== END OF CALLWISE DEPENDENCIES ======
[inout] Out (internal) for function f:
    x; y
[inout] Out (internal) for function g1:
    x
[inout] Out (internal) for function g2:
    y
[inout] Out (internal) for function main1:
    x; y

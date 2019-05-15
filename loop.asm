READ x
above: LOAD x
SUB 0
BRNEG out
WRITE x
LOAD x
SUB 1
STORE x
BR above
out: NOOP
STOP
x 0

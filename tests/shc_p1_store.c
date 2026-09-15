/* SHC 5.0r31 -optimize=1 emits mov #1,r3; rts; mov.l r3,@(4,r4).
 * GCC 13 uses r1, so this is not in the GCC matching link yet. */
void func_shc_p1_store(unsigned *p) { p[1] = 1; }

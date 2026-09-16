/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

#pragma section n011564
void func_0c032564(unsigned char *p) { if (--*(short *)(p + 28) == 0) { p[4]++; *(short *)(p + 28) = 120; } }

#pragma section n01157e
void func_0c03257e(unsigned char *p) { if (--*(short *)(p + 28) == 0) { p[4]++; *(short *)(p + 28) = 16; } }

#pragma section n12e248
void func_0c14f248(unsigned char *p) { if ((*(short *)(p + 28))-- == 0) p[4]++; }

#pragma section n146614
void func_0c167614(unsigned char *p, unsigned char *q) { if (--*(short *)(p + 28) <= 0) { *(short *)(p + 28) = 2; (*q)--; } }

#pragma section n15d91e
void func_0c17e91e(unsigned char *p) { if (--*(short *)(p + 30) == 0) { p[5]++; *(short *)(p + 30) = 4; } }

#pragma section n16c206
void func_0c18d206(char *p, unsigned char *q) { if (p[33]) { p[4]++; q[6] = 2; } }

#pragma section n1daa00
void *func_0c1fba00(unsigned char *p, unsigned char v, unsigned int n) { unsigned char *q = p; unsigned int i; for (i = 0; i < n; i++) *q++ = v; return p; }

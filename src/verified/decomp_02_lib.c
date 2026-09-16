/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

typedef void (*fn_t)(void *);
#pragma section n1da930
int func_0c1fb930(int a) { if (a > 0) return a; return -a; }

#pragma section n1df6e0
int func_0c2006e0(unsigned char *p) { ++*(int *)(p + 8); --*(int *)(p + 4); return 1; }

#pragma section n1f6d72
int func_0c217d72(unsigned char *p) { unsigned char *q = *(unsigned char **)(p + 8); if (q != 0) { *(int *)(q + 24) = 0; *(int *)(q + 20) = 0; } return 0; }

#pragma section n1fa91e
void func_0c21b91e(unsigned char *p, unsigned int off, short v) { *(short *)(p + off) = v; }

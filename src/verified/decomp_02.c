/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

typedef void (*fn_t)(void *);
#pragma section n004fc6
void func_0c025fc6(void *p) { ((fn_t *)((char *)p + 40))[0](p); }

#pragma section n0e1620
void func_0c102620(void *unused, unsigned char *p) { if (p[2] == 0) p[3] = 0; }

#pragma section n114b26
void func_0c135b26(unsigned char *p) { if (--*(short *)(p + 30) == 0) p[4]++; }

#pragma section n15fe44
void func_0c180e44(unsigned char *p) { p[4]++; p[5] = 0; p[6] = 0; }

#pragma section n1a0068
void func_0c1c1068(unsigned char *p) { p[4]++; *(short *)(p + 28) = 44; }

#pragma section n1a025e
void func_0c1c125e(unsigned char *p) { p[4]++; *(short*)(p+28)=20; *(short*)(p+30)=20; }

#pragma section n1bd46c
void func_0c1de46c(unsigned char *p) { if (--*(short *)(p + 28) == 0) p[4] = 0; }

#pragma section n1c5fa0
void func_0c1e6fa0(void) { char buf[56]; }

#pragma section n1da930
int func_0c1fb930(int a) { if (a > 0) return a; return -a; }

#pragma section n1df6e0
int func_0c2006e0(unsigned char *p) { ++*(int *)(p + 8); --*(int *)(p + 4); return 1; }

#pragma section n1f6d72
int func_0c217d72(unsigned char *p) { unsigned char *q = *(unsigned char **)(p + 8); if (q != 0) { *(int *)(q + 24) = 0; *(int *)(q + 20) = 0; } return 0; }

#pragma section n1fa91e
void func_0c21b91e(unsigned char *p, unsigned int off, short v) { *(short *)(p + off) = v; }

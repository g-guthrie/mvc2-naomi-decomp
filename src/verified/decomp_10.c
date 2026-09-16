/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

struct S_0c02f1d6 { int a; int b; float f8; unsigned char pad[8]; float f20; float f24; };
#pragma section n00e1d6
void func_0c02f1d6(struct S_0c02f1d6 *p) { p->f24 = p->f8 / (float)p->b; p->f20 = p->f24 * (float)p->a; p->f24 = -p->f24; }

#pragma section n00e1fc
void func_0c02f1fc(unsigned char *p) { *(float*)(p+32) = *(float*)(p+12) / (float)*(int*)(p+4); *(float*)(p+28) = *(float*)(p+32) * (float)*(int*)(p+0); *(float*)(p+32) = -*(float*)(p+32); }

#pragma section n00e222
void func_0c02f222(unsigned char *p) { *(float*)(p+40) = *(float*)(p+16) / (float)*(int*)(p+4); *(float*)(p+36) = *(float*)(p+40) * (float)*(int*)(p+0); *(float*)(p+40) = -*(float*)(p+40); }

struct S_0c067896 { unsigned char pad0[6]; unsigned char b6; unsigned char pad1[21]; short s28; unsigned char pad2[70]; float f100; unsigned char pad3[8]; float f112; };
#pragma section n046896
void func_0c067896(struct S_0c067896 *p) { p->f100 += p->f112; if (--p->s28 == 0) { p->b6++; p->s28 = 4; } }

struct S_0c0d4152 { unsigned char pad[52]; float f52; float f56; unsigned char pad2[32]; float f92; float f96; unsigned char pad3[4]; float f104; float f108; };
#pragma section n0b3152
void func_0c0d4152(struct S_0c0d4152 *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct S_0c12e228 { unsigned char pad[52]; float f52; float f56; unsigned char pad2[32]; float f92; float f96; unsigned char pad3[4]; float f104; float f108; };
#pragma section n10d228
void func_0c12e228(struct S_0c12e228 *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct S_0c15014e { unsigned char pad[52]; float f52; float f56; unsigned char pad2[32]; float f92; float f96; unsigned char pad3[4]; float f104; float f108; };
#pragma section n12f14e
void func_0c15014e(struct S_0c15014e *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct PQ_0c1675a0 { unsigned char pad[52]; float f52; float f56; };
struct RS_0c1675a0 { unsigned char pad[8]; float f8; float f12; };
#pragma section n1465a0
void func_0c1675a0(struct PQ_0c1675a0 *p, struct PQ_0c1675a0 *q, struct RS_0c1675a0 *r) { p->f52 = q->f52; p->f56 = q->f56; p->f52 += r->f8; p->f56 += r->f12; }

struct S_0c17e204 { unsigned char pad[52]; float f52; float f56; unsigned char pad2[32]; float f92; float f96; unsigned char pad3[4]; float f104; float f108; };
#pragma section n15d204
void func_0c17e204(struct S_0c17e204 *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct S_0c1a0df8 { unsigned char pad0[5]; unsigned char b5; unsigned char pad1[22]; short s28; unsigned char pad2[22]; float f52; unsigned char pad3[36]; float f92; };
#pragma section n17fdf8
void func_0c1a0df8(struct S_0c1a0df8 *p) { p->f52 += p->f92; if ((p->s28)-- <= 0) p->b5++; }

struct S_0c1bb7c2 { unsigned char pad[52]; float f52; float f56; unsigned char pad2[32]; float f92; float f96; unsigned char pad3[4]; float f104; float f108; };
#pragma section n19a7c2
void func_0c1bb7c2(struct S_0c1bb7c2 *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct S_0c1d0684 { unsigned char pad[52]; float f52; float f56; float f60; unsigned char pad2[28]; float f92; float f96; float f100; };
#pragma section n1af684
void func_0c1d0684(struct S_0c1d0684 *p) { p->f52 += p->f92; p->f56 += p->f96; p->f60 += p->f100; }

struct S_0c1d9706 { unsigned char pad[92]; float a,b,c,d,e,f; };
#pragma section n1b8706
void func_0c1d9706(struct S_0c1d9706 *p) { p->a += p->d; p->b += p->e; p->c += p->f; }

struct S_0c1d9732 { unsigned char pad[52]; float f52; float f56; float f60; unsigned char pad2[28]; float f92; float f96; float f100; };
#pragma section n1b8732
void func_0c1d9732(struct S_0c1d9732 *p) { p->f52 += p->f92; p->f56 += p->f96; p->f60 += p->f100; }

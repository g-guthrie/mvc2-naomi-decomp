/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

struct S_0c07f0c8 { unsigned char pad[52]; float f52,f56; unsigned char pad2[32]; float f92,f96,pad3,f104,f108; };
#pragma section n05e0c8
void func_0c07f0c8(struct S_0c07f0c8 *p) { p->f52 += p->f92; p->f92 += p->f104; if (p->f92 * p->f104 > 0.0f) { ((unsigned char*)p)[6]++; p->f92 = 0.0f; p->f104 = 0.0f; } }

struct A125_0c125ef0 { unsigned char pad[52]; float f52; unsigned char pad2[36]; float f92; unsigned char pad3[8]; float f104; }; struct B125_0c125ef0 { unsigned char pad[22]; unsigned char flag; unsigned char pad2[1]; float f24; short t28; };
#pragma section n104ef0
void func_0c125ef0(struct A125_0c125ef0 *p4, struct B125_0c125ef0 *p5) { if (!p5->flag) { if (p4->f52 > (float)p5->t28) { p4->f92 = -p5->f24; p4->f104 = -p4->f104; p5->flag = 1; } } else { if ((float)p5->t28 > p4->f52) { p4->f92 = p5->f24; p4->f104 = -p4->f104; p5->flag = 0; } } }

struct S_0c1a1124 { unsigned char pad[52]; float f52,f56; unsigned char pad2[32]; float f92,f96,pad3,f104,f108; };
#pragma section n180124
void func_0c1a1124(struct S_0c1a1124 *p) { if ((*(short*)((unsigned char*)p+28))-- == 0) ((unsigned char*)p)[4]++; p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; }

struct S_0c1d2b5a { unsigned char pad[52]; float f52,f56; unsigned char pad2[32]; float f92,f96,pad3,f104,f108; };
#pragma section n1b1b5a
void func_0c1d2b5a(struct S_0c1d2b5a *p) { p->f52 += p->f92; p->f92 += p->f104; p->f56 += p->f96; p->f96 += p->f108; if (--*(short*)((unsigned char*)p+28) == 0) { ((unsigned char*)p)[4]++; *(short*)((unsigned char*)p+28) = 2; } }

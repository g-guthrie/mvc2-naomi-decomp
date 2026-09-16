/* Hitachi SHC 5.0R31 reconstructed leaf functions. */

#pragma section n1465ee
void func_0c1675ee(unsigned char *p, char *q) { if (--*(short*)(p+28) <= 0) { *(short*)(p+28) = 2; (*q)++; if (*q >= 8) *q = 5; } }

#pragma section n1d7070
int func_0c1f8070(unsigned char *p) { int count = 0; if (*(int*)(p+4) >= 2) count++; if (*(int*)(p+8) >= 2) count++; if (count != 0) { *(int*)p = 0; *(int*)(p+4) = 1; *(int*)(p+8) = 0; *(int*)(p+12) = 1; } return count; }

struct S_0c2006a8 { int a; int b; unsigned char *c; unsigned char *d; };
#pragma section n1df6a8
int func_0c2006a8(struct S_0c2006a8 *p) { unsigned int v; v = *p->d; p->d++; p->a--; p->c++; p->b--; while (*p->c != 0) { p->c++; p->b--; } return v; }

struct Node_0c224cb8 { unsigned char pad[4]; struct Node_0c224cb8 *next; int f8; };
#pragma section n203cb8
int func_0c224cb8(struct Node_0c224cb8 *p, struct Node_0c224cb8 *a, int b) { struct Node_0c224cb8 *n = p->next; int result = 0; int one = 1; if (n != 0) { do { if (n == a && n && n->f8 == b) result = one; n = n->next; } while (n != 0); } return result; }

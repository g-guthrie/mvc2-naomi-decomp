/* GCC 13 -O2 -m4 -ml void/int field accessors. Address names until callers
 * establish roles. */

void func_0c025fc2(unsigned *p, unsigned v) { p[10] = v; }
void func_0c216c40(unsigned *p, unsigned v) { p[6] = v; }
void func_0c225040(unsigned *p, unsigned v) { p[11] = v; }
unsigned func_0c225044(unsigned *p) { return p[11]; }

void func_0c02e316(unsigned char *p) { p[4] = 10; }
void func_0c1b29fc(unsigned char *p) { p[4] = 2; }
void func_0c1bfdda(unsigned char *p) { p[4] = 3; }

void (*const table_0c2197f8[])(unsigned *, unsigned)
    __attribute__((section(".rodata.table_0c2197f8"), used)) = {
    func_0c216c40, func_0c225040,
};

void (*const table_0c219ad4[])(unsigned *, unsigned)
    __attribute__((section(".rodata.table_0c219ad4"), used)) = {
    func_0c216c40, func_0c225040,
};

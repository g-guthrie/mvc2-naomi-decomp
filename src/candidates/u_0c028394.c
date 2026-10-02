/* Candidate: retail prologue is sts fpscr; and #-4; lds fpscr then the stores
 * and calls below. SHC did not emit those four FPSCR insns from C; linked
 * image is 8 bytes short. */
extern void *dat_0c2d6f88;
extern void *ptr_0c2d6f84;
extern void func_0c0215f6(int);
extern void func_0c028154(void);
extern void func_0c0221d8(void);
extern void func_0c022354(void);
extern void func_0c02a894(void);
extern void func_0c1e9b20(void);
extern void func_0c1eae80(void);
extern void func_0c02156c(void *);
extern unsigned char dat_0c2d6f24[];
extern void func_0c02c3e2(void);
extern void func_0c022526(void);
extern void func_0c021c9c(void);
extern void func_0c0223d4(void);
extern void func_0c034288(void);
extern int dat_0c28401c;
extern int dat_0c284018;
extern void func_0c02ab2c(void);
extern void func_0c1e68dc(void);
extern void func_0c02c39a(void);
extern void func_0c02c4a2(void);
extern void func_0c0271de(void);
extern void func_0c023060(void);

void func_0c028394(void)
{
    void (*a)(void);
    void (*b)(void);
    void (*c)(void *);
    void (*d)(void);
    unsigned char *p;
    unsigned char *q;
    int z;

    ptr_0c2d6f84 = &dat_0c2d6f88;
    func_0c0215f6(0);
    func_0c028154();
    func_0c0221d8();
    func_0c022354();
    func_0c02a894();
    p = dat_0c2d6f24;
    q = dat_0c2d6f24 + 20;
    a = func_0c1e9b20;
    b = func_0c1eae80;
    c = func_0c02156c;
    d = func_0c023060;
    z = 0;
    for (;;) {
        a();
        b();
        c(p);
        c(q);
        func_0c02c3e2();
        func_0c022526();
        func_0c021c9c();
        func_0c0223d4();
        func_0c034288();
        dat_0c28401c = z;
        dat_0c284018 = z;
        func_0c02ab2c();
        func_0c1e68dc();
        func_0c02c39a();
        func_0c02c4a2();
        func_0c0271de();
        d();
    }
}

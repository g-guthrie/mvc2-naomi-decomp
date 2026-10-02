/* Candidate: 0x0c02bba8 size 436. Init/dispatch stores and the 0x5a4 player
 * loop are drafted from disassembly; linked size is still short of retail. */
struct G_0c02bba8 {
    unsigned char pad0[1];
    unsigned char b1;
    unsigned char pad1[24 - 2];
    unsigned char b24;
    unsigned char b25;
    unsigned char pad2[44 - 26];
    unsigned char b44;
    unsigned char pad3[46 - 45];
    unsigned char b46;
    unsigned char pad4[78 - 47];
    unsigned char b78;
    unsigned char b79;
    unsigned char pad5[131 - 80];
    unsigned char b131;
    unsigned char pad6[133 - 132];
    unsigned char b133;
    unsigned char pad7[178 - 134];
    unsigned char b178;
};

struct Pl_0c02bba8 {
    unsigned char b0;
    unsigned char b1;
    unsigned char pad0[0x12c - 2];
    unsigned char b12c;
    unsigned char pad1[0x524 - 0x12d];
    unsigned char b524;
    unsigned char pad2[0x52c - 0x525];
    unsigned char b52c;
    unsigned char pad3[0x53f - 0x52d];
    unsigned char b53f;
    unsigned char pad4[0x543 - 0x540];
    unsigned char b543;
    unsigned char pad5[0x5a4 - 0x544];
};

extern struct G_0c02bba8 *dat_0c2d6f84;
extern unsigned char dat_0c2d7008[];
extern unsigned char dat_0c2f8338[];
extern unsigned char dat_0c284024;
extern unsigned char dat_0c358480;
extern unsigned char dat_0c38b100;
extern struct Pl_0c02bba8 dat_0c2d7088[];
extern void *func_0c1fba00(void *, unsigned char, unsigned int);
extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern void func_0c02a7e0(void);
extern void func_0c023658(int);
extern void func_0c034358(void);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
extern void func_0c033fd0(int);
extern void func_0c1ed730(void *, int);
extern void func_0c1edf50(int);
extern void func_0c1eeb60(void);
extern void func_0c1ef190(int, float, float, float);
extern void func_0c1e9e80(int, int);
extern void func_0c1e8fd0(void *, void *);
extern void func_0c1f0f50(void);
extern void func_0c1ecda0(void);
extern void func_0c037354(void);

void func_0c02bba8(void)
{
    unsigned char one;
    unsigned char z;
    struct Pl_0c02bba8 *p;
    int i;

    one = 1;
    dat_0c2d6f84->b1 = dat_0c2d6f84->b1 + 1;
    dat_0c2d6f84->b25 = one;
    z = 0;
    func_0c1fba00(dat_0c2d7008, z, 0x80);
    func_0c1fba00(dat_0c2f8338, z, 0xc0);
    dat_0c2d6f84->b133 = dat_0c2d6f84->b24;
    dat_0c2d6f84->b46 = z;
    dat_0c2d6f84->b131 = dat_0c2d6f84->b79;
    dat_0c2d6f84->b78 = 6;
    dat_0c2d6f84->b44 = z;
    dat_0c2d6f84->b178 = 3;
    func_0c02aa78();
    func_0c02aaac();
    func_0c02a7e0();
    func_0c023658(0);
    func_0c034358();
    func_0c033cbe();
    func_0c033cd8();
    func_0c033fd0(127);
    func_0c1ed730(&dat_0c284024, 64);
    func_0c1edf50(3);
    func_0c1eeb60();
    func_0c1ef190(0x1d28, 12000.0f, 0.300000012f, 1.3333334f);
    func_0c1edf50(one);
    func_0c1e9e80(0x00808080, 0x80);
    func_0c1e8fd0(&dat_0c358480, &dat_0c38b100);
    func_0c1f0f50();
    func_0c1ecda0();
    func_0c037354();
    i = 0;
    do {
        p = &dat_0c2d7088[i];
        p->b0 = one;
        p->b12c = z;
        p->b524 = (unsigned char)i;
        p->b1 = (unsigned char)i;
        p->b52c = (unsigned char)i;
        p->b53f = (unsigned char)(i >> 1);
        p->b543 = 2;
        i = i + 1;
    } while (i < 6);
}

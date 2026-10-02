/* Candidate: 0c030fc0 size 384. Linked at size after 0x1d28 int arg;
 * r12 save and store scheduling still differ. */

struct G_0c030fc0 {
    unsigned char pad0[2];
    unsigned char b2, b3, b4, b5, b6, b7;
    unsigned char pad1[0x47 - 10];
    unsigned short w8;
    unsigned char b47;
    unsigned char pad2[0x98 - 0x48];
    unsigned char b98;
};

struct G2_0c030fc0 {
    unsigned char b0, b1, b2, b3;
    unsigned char pad0[3];
    unsigned char b7;
    int i8;
    int i12;
    unsigned short w18;
    unsigned char pad1[0x3f - 20];
    unsigned char b3f;
};

struct G3_0c030fc0 {
    unsigned char pad0[1];
    unsigned char b1, b2;
};

struct G4_0c030fc0 {
    unsigned char pad0[4];
    unsigned char b4, b5, b6, b7;
};

extern void func_0c1ed730(void *, int);
extern unsigned char dat_0c284024;
extern void func_0c1edf50(int);
extern void func_0c1eeb60(void);
extern void func_0c1ef190(int, float, float, float);
extern void func_0c1e8fd0(void *, void *);
extern unsigned char dat_0c358480;
extern unsigned char dat_0c38b100;
extern void func_0c1f0f50(void);
extern void func_0c1ecda0(void);
extern void func_0c1d9370(void);
extern void func_0c0306a0(void);
extern struct G_0c030fc0 *ptr_0c2d6f84;
extern struct G2_0c030fc0 *ptr_0c2f83f8;
extern struct G2_0c030fc0 dat_0c2f8338;
extern struct G3_0c030fc0 dat_0c2d9260;
extern struct G4_0c030fc0 dat_0c2d7088;
extern void func_0c0411c8(void);
extern struct G4_0c030fc0 dat_0c2d762c;
extern void func_0c1cd2c0(int);
extern void func_0c02a7ea(int, int, int);

void func_0c030fc0(void)
{
    int z;
    int one;

    func_0c1ed730(&dat_0c284024, 64);
    func_0c1edf50(3);
    func_0c1eeb60();
    func_0c1ef190(0x1d28, 1.3333334f, 0.300000012f, 12000.0f);
    func_0c1edf50(1);
    func_0c1e8fd0(&dat_0c358480, &dat_0c38b100);
    func_0c1f0f50();
    func_0c1ecda0();
    func_0c1d9370();
    func_0c0306a0();
    z = 0;
    ptr_0c2d6f84->b2 = ptr_0c2d6f84->b2 + 1;
    ptr_0c2d6f84->b3 = z;
    one = 1;
    ptr_0c2d6f84->b4 = z;
    ptr_0c2d6f84->b5 = z;
    ptr_0c2d6f84->b6 = z;
    ptr_0c2d6f84->b7 = z;
    ptr_0c2d6f84->w8 = 0x438;
    ptr_0c2d6f84->b98 = z;
    ptr_0c2f83f8 = &dat_0c2f8338;
    ptr_0c2f83f8->b1 = one;
    ptr_0c2f83f8->b2 = z;
    ptr_0c2f83f8->b3 = z;
    ptr_0c2f83f8->i8 = z;
    ptr_0c2f83f8->b7 = z;
    ptr_0c2f83f8->i12 = z;
    ptr_0c2f83f8->b3f = z;
    ptr_0c2f83f8->b0 = 4;
    ptr_0c2f83f8->w18 = z;
    dat_0c2d9260.b2 = z;
    dat_0c2d9260.b1 = z;
    dat_0c2d7088.b4 = z;
    dat_0c2d7088.b5 = one;
    dat_0c2d7088.b6 = z;
    dat_0c2d7088.b7 = z;
    func_0c0411c8();
    dat_0c2d762c.b4 = z;
    dat_0c2d762c.b5 = one;
    dat_0c2d762c.b6 = z;
    dat_0c2d762c.b7 = z;
    func_0c0411c8();
    if (ptr_0c2d6f84->b47)
        func_0c1cd2c0(0);
    func_0c02a7ea(0xff000000, 60, 0);
}

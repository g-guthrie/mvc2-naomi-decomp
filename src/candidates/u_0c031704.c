/* Candidate: section 4 bytes long (pool pad); b6 increment scheduling vs
 * named 1 in r5; otherwise dispatcher and init match. */

struct Rec_0c031704 {
    unsigned char pad0[4];
    char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char pad1[1];
    short w8;
    short w10;
    short w12;
    short w14;
    unsigned char pad2[9];
    unsigned char b25;
};

struct G_0c2d93d0 {
    unsigned char b0;
    unsigned char pad1[3];
    int i4;
    unsigned char pad2[1];
    unsigned char b9, b10, b11;
    float f12;
};

extern struct Rec_0c031704 *dat_0c2d6f84;
extern void (*table_0c23b214[])(void);
extern void func_0c0374b8(int);
extern void func_0c02c314(void (*)(void));
extern void func_0c0260d8(void);
extern void *ptr_0c2fb1e4;
extern void *ptr_0c2fb1e8;
extern unsigned char dat_0c2fb1ec;
extern unsigned char dat_0c2fb1ed;
extern unsigned char dat_0c2fb1ee;
extern unsigned char dat_0c2fb1ef;
extern void func_0c22d1c0(void);
extern void func_0c23b1d0(void);
extern void func_0c034258(void);
extern void func_0c037354(void);
extern void func_0c0275a4(void);
extern void func_0c0275bc(void *);
extern void func_0c23b220(void);
extern void func_0c0275d0(float);
extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern void func_0c027ff0(int);
extern void func_0c023a50(void);
extern void func_0c023658(int);
extern void func_0c0268b8(void);
extern void func_0c02a7ea(int, int, int);
extern void func_0c0267c4(void);
extern struct G_0c2d93d0 dat_0c2d93d0;
extern void func_0c0267ce(void);
extern void func_0c0342a2(int);
extern void func_0c033ef8(int);
extern void func_0c034312(void);

void func_0c031704(void)
{
    table_0c23b214[dat_0c2d6f84->b4]();
    func_0c0374b8(11);
    func_0c0374b8(6);
    func_0c02c314(func_0c0260d8);
}

void func_0c03172a(void)
{
    struct Rec_0c031704 *a;

    a = dat_0c2d6f84;
    if (!a->b6) {
        int z;
        int one;
        z = 0;
        a->b5 = z;
        one = 1;
        dat_0c2d6f84->b6 = dat_0c2d6f84->b6 + 1;
        dat_0c2d6f84->b25 = one;
        dat_0c2d6f84->w8 = 0x1770;
        dat_0c2d6f84->w10 = z;
        dat_0c2d6f84->w12 = one;
        dat_0c2d6f84->w14 = 60;
        ptr_0c2fb1e4 = func_0c22d1c0;
        ptr_0c2fb1e8 = func_0c23b1d0;
        dat_0c2fb1ec = one;
        dat_0c2fb1ef = z;
        dat_0c2fb1ee = z;
        dat_0c2fb1ed = z;
        func_0c034258();
        func_0c037354();
        func_0c0275a4();
        func_0c0275bc(&func_0c23b220);
        func_0c0275d0(1.0f);
        func_0c02aa78();
        func_0c02aaac();
        func_0c027ff0(9);
        func_0c023a50();
        func_0c023658(0xff000000);
        func_0c0268b8();
        func_0c02a7ea(-1, 60, 0);
        func_0c0267c4();
        dat_0c2d93d0.b0 = 0;
        dat_0c2d93d0.i4 = 0x80;
        dat_0c2d93d0.f12 = 9000.0f;
        dat_0c2d93d0.b9 = 0;
        dat_0c2d93d0.b10 = 0xb0;
        dat_0c2d93d0.b11 = 0xb0 + 48;
        func_0c0267ce();
    } else {
        a->b4 = a->b4 + 1;
        dat_0c2d6f84->b6 = 0;
        func_0c0342a2(12);
        func_0c033ef8(1);
        func_0c034312();
    }
}

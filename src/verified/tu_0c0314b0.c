struct G_0c0314b0 {
    unsigned char pad0[2];
    unsigned char b2;
    char b3;
    unsigned char pad1[8 - 4];
    unsigned short w8;
    unsigned char pad2[14 - 10];
    unsigned short w14;
    unsigned char pad3[0x19 - 16];
    unsigned char b19;
    unsigned char pad4[0xa4 - 0x1a];
    unsigned char ba4;
};

struct Rec_0c0314b0 {
    unsigned char b0;
    unsigned char pad0[3];
    int i4;
    unsigned char pad1[1];
    unsigned char b9, ba, bb;
    float f12;
};

extern struct G_0c0314b0 *ptr_0c2d6f84;
extern void (*table_0c23b1c4[])(void);
extern void func_0c0374b8(int);
extern void func_0c02c314(void *);
extern unsigned char dat_0c026196;
extern void func_0c0275a4(void);
extern void func_0c0268b8(void);
extern void func_0c033e6c(int, int);
extern void func_0c0343ac(int);
extern void func_0c034a1c(int);
extern void func_0c1cd3aa(void);
extern void func_0c1cd5e4(int);
extern void func_0c0267c4(void);
extern struct Rec_0c0314b0 dat_0c2d93d0;
extern void func_0c0267ce(void);

void func_0c0314b0(void)
{
    table_0c23b1c4[ptr_0c2d6f84->b3]();
    func_0c0374b8(5);
    func_0c0374b8(11);
    func_0c02c314(&dat_0c026196);
}

void func_0c0314d6(void)
{
    ptr_0c2d6f84->b3++;
    ptr_0c2d6f84->b19 = 1;
    ptr_0c2d6f84->ba4 = 0;
    ptr_0c2d6f84->w8 = 0x14a;
    ptr_0c2d6f84->w14 = 60;
    func_0c0275a4();
    func_0c0268b8();
    func_0c033e6c(0, 1);
    func_0c033e6c(1, 1);
    func_0c0343ac(5);
    func_0c034a1c(61);
    func_0c1cd3aa();
    func_0c1cd5e4(0);
    func_0c1cd5e4(1);
    func_0c1cd5e4(2);
    func_0c1cd5e4(3);
    func_0c1cd5e4(4);
    func_0c1cd5e4(5);
    func_0c1cd5e4(6);
    func_0c1cd5e4(7);
    func_0c1cd5e4(8);
    func_0c1cd5e4(9);
    func_0c1cd5e4(10);
    func_0c1cd5e4(11);
    func_0c1cd5e4(12);
    func_0c1cd5e4(13);
    func_0c0267c4();
    dat_0c2d93d0.b0 = 1;
    dat_0c2d93d0.i4 = 42;
    dat_0c2d93d0.f12 = 9000.0f;
    dat_0c2d93d0.b9 = 0;
    dat_0c2d93d0.ba = 0;
    dat_0c2d93d0.bb = 0;
    func_0c0267ce();
}

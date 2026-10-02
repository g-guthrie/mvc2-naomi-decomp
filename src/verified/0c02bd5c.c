struct G_0c02bd5c {
    unsigned char b0;
    unsigned char b1;
    char b2;
    unsigned char b3, b4, b5, b6, b7;
    short w8, w10, w12, w14;
    unsigned char pad0[20 - 16];
    int l20;
    unsigned char pad1[80 - 24];
    unsigned char b80;
    unsigned char pad2[129 - 81];
    unsigned char b129;
    unsigned char pad2b[132 - 130];
    char b84;
    char b85;
    unsigned char pad3[154 - 134];
    unsigned char b9a;
    unsigned char pad4[165 - 155];
    unsigned char ba5;
};

typedef void (*fn_0c02bd5c)(void);

extern struct G_0c02bd5c *dat_0c2d6f84;
extern fn_0c02bd5c table_0c23aa28[];
extern unsigned char dat_0c2d75b6[];
extern void func_0c0275dc(void);
extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern void func_0c023658(int);
extern void func_0c038438(void);
extern void func_0c0394cc(void);
extern void func_0c02ced4(void);
extern void func_0c0302c0(void);
extern void func_0c031200(void);
extern void func_0c0314b0(void);
extern void func_0c031704(void);
extern void func_0c037354(void);
extern void func_0c0268b8(void);
extern void func_0c0267c4(void);
extern void func_0c02a7e0(void);

void func_0c02bd5c(void)
{
    table_0c23aa28[dat_0c2d6f84->b2]();
    func_0c0275dc();
}

void func_0c02bd74(void)
{
    unsigned char one;
    unsigned char z;

    one = 1;
    dat_0c2d6f84->b2 = one;
    z = 0;
    dat_0c2d6f84->b3 = z;
    dat_0c2d6f84->b4 = z;
    dat_0c2d6f84->b5 = z;
    dat_0c2d6f84->b6 = z;
    dat_0c2d6f84->b7 = z;
    dat_0c2d6f84->b9a = 1;
    dat_0c2d6f84->b80 = z;
    dat_0c2d6f84->ba5 = dat_0c2d6f84->b85;
    dat_0c2d6f84->b129 = z;
    if ((dat_0c2d6f84->b85 | dat_0c2d6f84->b84) != 3)
        dat_0c2d6f84->b129 = dat_0c2d75b6[(dat_0c2d6f84->b85 - 1) * 0x5a4];
    func_0c02aa78();
    func_0c02aaac();
    func_0c023658(0);
    func_0c038438();
    func_0c0394cc();
}

void func_0c02be06(void)
{
    func_0c02ced4();
}

void func_0c02be0c(void)
{
    func_0c0302c0();
}

void func_0c02be12(void)
{
    func_0c031200();
}

void func_0c02be18(void)
{
    func_0c0314b0();
}

void func_0c02be1e(void)
{
    func_0c031704();
}

void func_0c02be24(void)
{
    int z;

    dat_0c2d6f84->l20 = 64;
    z = 0;
    dat_0c2d6f84->b0 = 1;
    dat_0c2d6f84->b1 = z;
    dat_0c2d6f84->b2 = z;
    dat_0c2d6f84->b3 = z;
    dat_0c2d6f84->b4 = z;
    dat_0c2d6f84->b5 = z;
    dat_0c2d6f84->b6 = z;
    dat_0c2d6f84->b7 = z;
    dat_0c2d6f84->w8 = z;
    dat_0c2d6f84->w10 = z;
    dat_0c2d6f84->w12 = z;
    dat_0c2d6f84->w14 = z;
    func_0c037354();
    func_0c0268b8();
    func_0c0267c4();
    func_0c02a7e0();
    func_0c023658(0);
}

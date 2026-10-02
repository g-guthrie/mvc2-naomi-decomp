/* Candidate: 175/244. Prologue schedules stores before sts.l pr;
 * table index emits extu.b; loop pool words 0x21d8/0x420 swap vs retail. */

struct G_0c030ecc {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[8 - 3];
    unsigned short w8;
    unsigned char pad2[0x2e - 10];
    unsigned char b2e;
    unsigned char pad3[0x80 - 0x2f];
    unsigned char b80;
    unsigned char pad4[0x90 - 0x81];
    int i90;
};

struct Rec_0c030ecc {
    unsigned char pad0[0x420];
    unsigned short w420;
    unsigned short pad1;
    unsigned short w424;
    unsigned char pad2[0x5a4 - 0x426];
};

struct B_0c030ecc {
    unsigned char pad[59];
    unsigned char b59;
};

extern struct G_0c030ecc *ptr_0c2d6f84;
extern void (*table_0c23b1ac[])(void);
extern struct Rec_0c030ecc dat_0c2d7088[];
extern struct B_0c030ecc dat_0c2f8338;
extern void func_0c038fb8(void);
extern void func_0c0382a4(void);
extern void func_0c0377fc(void);
extern void func_0c026a28(void);
extern void func_0c0377d0(void);
extern void func_0c036568(void);
extern void func_0c037656(int);
extern void func_0c02c314(void *);
extern unsigned char dat_0c0261ec;

void func_0c030ecc(void)
{
    struct Rec_0c030ecc *p;
    struct Rec_0c030ecc *end;

    ptr_0c2d6f84->b2e = 1;
    ptr_0c2d6f84->b80 = ptr_0c2d6f84->b80 + 1;
    table_0c23b1ac[ptr_0c2d6f84->b2]();
    p = dat_0c2d7088;
    end = (struct Rec_0c030ecc *)((char *)dat_0c2d7088 + 0x21d8);
    do {
        p->w420 = 0x90;
        p->w424 = 0x90;
        p = (struct Rec_0c030ecc *)((char *)p + 0x5a4);
    } while (p < end);
    if (ptr_0c2d6f84->i90 != -1)
        ptr_0c2d6f84->i90 = ptr_0c2d6f84->i90 + 1;
    func_0c038fb8();
    dat_0c2f8338.b59 = (unsigned char)((dat_0c2f8338.b59 + 1) & 15);
    if (ptr_0c2d6f84->w8) {
        func_0c0382a4();
        func_0c0377fc();
    }
    func_0c026a28();
    func_0c0377d0();
    if (ptr_0c2d6f84->w8) {
        func_0c036568();
        func_0c037656(3);
        func_0c037656(4);
        func_0c037656(1);
        func_0c037656(2);
    }
    func_0c02c314(&dat_0c0261ec);
}

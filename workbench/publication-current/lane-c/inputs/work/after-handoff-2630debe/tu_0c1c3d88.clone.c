/* Assembled by tools/clone.py from verified twins. */
struct Pair_0c132c24 { char b0, b1; };
struct Inner_0c132c24 {
    unsigned char pad0[0x12c - 0xdc];
    unsigned char b12c;
    unsigned char pad1[0x130 - 0x12d];
    unsigned short w130;
    unsigned char pad2[0x150 - 0x132];
    struct Pair_0c132c24 s150;
    unsigned char pad3[0x19c - 0x152];
};
struct Vec3 { float x, y, z; };
struct Obj_0c132c24 {
    unsigned char pad0;
    unsigned char b1, b2;
    unsigned char pad1;
    unsigned char b4;
    unsigned char pad2[16 - 5];
    void (*fn16)(struct Obj_0c132c24 *);
    unsigned char pad3[4];
    struct Obj_0c132c24 *p24;
    unsigned char pad4[36 - 28];
    unsigned char b36;
    unsigned char pad5[48 - 37];
    unsigned char b48;
    unsigned char pad6[52 - 49];
    float f52, f56, f60;
    unsigned char pad7[80 - 64];
    struct Vec3 s80;
    unsigned char pad8[0xdc - 92];
    struct Inner_0c132c24 sdc;
    unsigned char pad9[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};
typedef void (*fn_t)(struct Obj_0c132c24 *);
extern fn_t dat_0c24e314[];
extern struct Obj_0c132c24 *func_0c0374da(int a, int b, int c);
extern void func_0c02a0c4(struct Obj_0c132c24 *p, int b, int c);
extern char func_0c02a026(struct Obj_0c132c24 *p);
extern void func_0c037688(struct Obj_0c132c24 *p);
void func_0c132c4a(struct Obj_0c132c24 *p);
void func_0c132d14(struct Obj_0c132c24 *p);
int func_0c132dc0(struct Obj_0c132c24 *p);

/* func_0c1c3d88: no verified twin. Ghidra draft:
*/
void func_0c1c3d88(void) { }

/* func_0c1c3e60: no verified twin. Ghidra draft:
*/
void func_0c1c3e60(void) { }

/* func_0c1c3fc8: no verified twin. Ghidra draft:
*/
void func_0c1c3fc8(void) { }

int func_0c1c4074(struct Obj_0c132c24 *p)
{
    p->b4++;
    p->sdc.b12c = 0;
}

/* Assembled by tools/clone.py from verified twins. */
struct V3_0c1c7090 { float x, y, z; };
struct Obj_0c1c7090;
typedef void (*fn_0c1c7090)(struct Obj_0c1c7090 *);
struct Obj_0c1c7090 {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char pad1[16 - 5];
    fn_0c1c7090 p16;
    void *p20;
    struct Obj_0c1c7090 *p24;
    unsigned char pad2[32 - 28];
    unsigned char b32;
    unsigned char b33;
    unsigned char b34;
    unsigned char pad3[52 - 35];
    struct V3_0c1c7090 v52;
    int arr64[1];
    int d68;
    int d72;
    unsigned char pad4[0x84 - 76];
    int d84;
    unsigned char pad5[0xcc - 0x88];
    int dcc;
    unsigned char pad6[0x12c - 0xd0];
    unsigned char b12c;
};
struct Glob_0c2d9658 { int (*p0)[1]; };
extern struct Glob_0c2d9658 *dat_0c2d9658;
extern fn_0c1c7090 dat_0c25e8c4[];
extern struct Obj_0c1c7090 *func_0c0374da(int, int, int);
extern void func_0c02fc02(struct Obj_0c1c7090 *, int, float, float);
extern void func_0c037688(struct Obj_0c1c7090 *);
void func_0c1c713e(struct Obj_0c1c7090 *a);

/* func_0c1c7194: no verified twin. Ghidra draft:
*/
void func_0c1c7194(void) { }

/* func_0c1c7278: no verified twin. Ghidra draft:
*/
void func_0c1c7278(void) { }

/* func_0c1c7300: no verified twin. Ghidra draft:
*/
void func_0c1c7300(void) { }

/* func_0c1c7368: no verified twin. Ghidra draft:
*/
void func_0c1c7368(void) { }

void func_0c1c743c(struct Obj_0c1c7090 *a)
{
    dat_0c25e8c4[a->p24->b4](a);
}

/* func_0c1c7450: no verified twin. Ghidra draft:
*/
void func_0c1c7450(void) { }

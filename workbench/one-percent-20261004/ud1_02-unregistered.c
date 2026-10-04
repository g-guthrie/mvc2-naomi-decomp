/* Unregistered: 386/388 bytes match. The two independent DC-offset loads
 * at 0c1aa35c/0c1aa35e are scheduled in the opposite order.
 * Native review fixed allocator arguments, callback entry/conditions,
 * flag lifetime and interpolation. No whole-unit credit is claimed. */
struct Obj_ud1_02;
typedef void (*handler_ud1_02)(struct Obj_ud1_02 *);

struct Big_ud1_02 {
    unsigned char pad0[0x12c - 0xdc];
    unsigned char b12c;
    unsigned char pad1[0xc0 - (0x12c - 0xdc) - 1];
};
struct Vec3_ud1_02 { float x, y, z; };

struct Obj_ud1_02 {
    unsigned char pad0[1];
    unsigned char b1, b2;
    unsigned char pad1[1];
    unsigned char b4;
    unsigned char pad2[1];
    unsigned char b6;
    unsigned char pad3[16 - 7];
    handler_ud1_02 p16;
    struct Obj_ud1_02 *p20;
    struct Obj_ud1_02 *p24;
    unsigned char pad5[32 - 28];
    unsigned char b32;
    unsigned char pad6[36 - 33];
    unsigned char b36;
    unsigned char pad7[38 - 37];
    unsigned short w38;
    unsigned char pad8[48 - 40];
    unsigned char b48;
    char b49;
    unsigned char pad9[52 - 50];
    float f52, f56;
    unsigned char pad10[80 - 60];
    struct Vec3_ud1_02 vel;
    unsigned char pad11[0xdc - 92];
    struct Big_ud1_02 xdc;
    unsigned char pad12[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};

extern handler_ud1_02 dat_0c2599d0[];
extern struct Obj_ud1_02 *func_0c0374da(int, int, int);
extern void func_0c029e70(struct Obj_ud1_02 *, int, int);
extern void func_0c037688(struct Obj_ud1_02 *);

void func_0c1aa342(struct Obj_ud1_02 *a);
void func_0c1aa3e2(struct Obj_ud1_02 *a);
void func_0c1aa43a(struct Obj_ud1_02 *a, struct Obj_ud1_02 *sub);

struct Obj_ud1_02 *func_0c1aa314(struct Obj_ud1_02 *param1, unsigned char param2)
{
    struct Obj_ud1_02 *result;
    if ((result = func_0c0374da(0, 3, 0)) != 0) {
        result->p16 = func_0c1aa342;
        result->p24 = param1;
        result->b32 = param2;
    }
    return result;
}

void func_0c1aa342(struct Obj_ud1_02 *a)
{
    dat_0c2599d0[a->b4](a);
}

void func_0c1aa354(struct Obj_ud1_02 *a)
{
    struct Obj_ud1_02 *obj;
    unsigned char one=1;

    a->b4 = a->b4 + 1;
    a->w38 = 0x1c01;
    a->xdc.b12c=one;
    obj=a->p24;
    a->xdc=obj->xdc;
    a->xdc.b12c=one;
    a->b2 = obj->b2;
    a->b1 = obj->b1;
    a->vel.x = obj->vel.x;
    a->vel.y = obj->vel.y;
    a->b1a3 = obj->b1a3;
    a->b1a4 = obj->b1a4;
    a->b48 = obj->b48;
    a->vel = obj->vel;
    a->b36 = obj->b36;
    a->b49 = -1;
    a->f52 = obj->f52;
    if(a->b32)func_0c029e70(a,27,1);else func_0c029e70(a,27,2);
    func_0c1aa3e2(a);
}

void func_0c1aa3e2(struct Obj_ud1_02 *a)
{
 struct Obj_ud1_02 *sub=a->p24;
 if((unsigned char)sub->b6>2){a->b4=2;a->xdc.b12c=0;return;}
 a->b36=sub->b36;
 if(a->b32==0)a->f56=sub->f56+304.28571f;
 else func_0c1aa43a(a,sub);
}

void func_0c1aa426(struct Obj_ud1_02 *a)
{
    a->b4 = a->b4 + 1;
    a->xdc.b12c = 0;
}

void func_0c1aa434(struct Obj_ud1_02 *a)
{
    func_0c037688(a);
}

void func_0c1aa43a(struct Obj_ud1_02 *a, struct Obj_ud1_02 *sub)
{
 struct Obj_ud1_02 *target;
 float origin,step;
 sub=a->p24;target=sub->p20;origin=sub->f56;
 step=(target->f56-origin + -34.2857132f)/8.0f;
 origin+=step*(float)a->b32;
 a->f56=origin;
}

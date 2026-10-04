/* Native packet configuration before 2082e0 derives render header words. */
struct PacketConfig1e8970 {
 unsigned int flags0;
 int i4,i8,i12,i16,i20,i24;
 unsigned char unknown28[4];
 int i32,i36,i40,i44,i48,i52,i56,i60,i64,i68;
 unsigned char unknown72[4];
 int i76;
 unsigned char unknown80[4];
 int i84,i88,i92,i96,i100,i104;
 void *p108;
 float f112,f116,f120,f124,f128,f132,f136,f140;
 unsigned char generated144[16];
 unsigned int flags160;
};
struct PacketSubmission1e8970 { unsigned char unknown0[4]; void *header4; };
extern struct PacketSubmission1e8970 dat_0c3543b8;
extern void func_0c2082e0(struct PacketConfig1e8970 *);
extern void func_0c208a20(struct PacketSubmission1e8970 *,struct PacketConfig1e8970 *);
struct StripVertex16 { float x,y,z; unsigned int color; };
struct StripVertex28 { float x,y,z,u,v; unsigned int color,offset_color; };
struct StripPacket32 { unsigned int flags; float x,y,z,u,v; unsigned int color,offset_color; };
struct TextureRecord60 { unsigned char unknown[60]; };
extern struct TextureRecord60 *dat_0c357a00;
extern struct PacketConfig1e8970 *dat_0c358008;
extern void func_0c1e9bd0(int);
extern int func_0c2081e0(struct PacketSubmission1e8970 *,struct StripPacket32 *,int,int);
extern int func_0c208260(struct PacketSubmission1e8970 *);
extern void func_0c2089a0(struct PacketSubmission1e8970 *,struct PacketConfig1e8970 *);
void func_0c1e83a0(int count,struct StripVertex16 *v)
{
 struct StripPacket32 packet;int i,remaining=count-1;
 func_0c1e9bd0(2);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 for(i=0;i<remaining;i++){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,0,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,0,32);
}
void func_0c1e8450(int count,struct StripVertex16 *v)
{
 struct StripPacket32 packet;int i,remaining=count-1;
 func_0c1e9bd0(7);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 for(i=0;i<remaining;i++){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,1,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,1,32);
}
void func_0c1e8500(int count,struct StripVertex28 *v,int texture)
{
 struct StripPacket32 packet;
 dat_0c358008->p108=&dat_0c357a00[texture];func_0c1e9bd0(18);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 packet.offset_color=0;
 while(--count){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);
}
void func_0c1e85e0(int count,struct StripVertex28 *v,int texture)
{
 struct StripPacket32 packet;
 dat_0c358008->p108=&dat_0c357a00[texture];func_0c1e9bd0(23);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 packet.offset_color=0;
 while(--count){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);
}
void func_0c1e86e0(int count,struct StripVertex28 *v,int texture)
{
 struct StripPacket32 packet;
 dat_0c358008->p108=&dat_0c357a00[texture];func_0c1e9bd0(18);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 packet.offset_color=0;
 while(--count){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;packet.offset_color=v->offset_color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;packet.offset_color=v->offset_color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);
}
void func_0c1e87c0(int count,struct StripVertex28 *v,int texture)
{
 struct StripPacket32 packet;
 dat_0c358008->p108=&dat_0c357a00[texture];func_0c1e9bd0(31);func_0c208a20(&dat_0c3543b8,dat_0c358008);func_0c208260(&dat_0c3543b8);
 packet.offset_color=0;
 while(--count){packet.flags=0xe0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;packet.offset_color=v->offset_color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);v++;}
 packet.flags=0xf0000000;packet.x=v->x;packet.y=v->y;packet.z=v->z;packet.u=v->u;packet.v=v->v;packet.color=v->color;packet.offset_color=v->offset_color;func_0c2081e0(&dat_0c3543b8,&packet,3,32);
}
void func_0c1e88a0(struct PacketConfig1e8970 *a)
{
 a->flags0=0x03f3ffff;
 a->i4=0;a->i8=0;a->i12=0;a->i64=0;a->i16=0;a->i20=4;a->i24=0;
 a->i32=1;a->i36=1;a->i40=0;a->i44=8;a->i48=6;a->i52=0;a->i56=0;a->i60=2;
 a->i64=0;a->i68=0;a->i76=0;a->i84=0;a->i88=0;a->i92=4;a->i96=3;
 a->p108=0;a->i100=0;a->i104=0;
 a->f112=1.0f;a->f116=1.0f;a->f120=1.0f;a->f124=1.0f;
 a->f128=1.0f;a->f132=1.0f;a->f136=1.0f;a->f140=1.0f;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);func_0c2089a0(&dat_0c3543b8,a);
}
void func_0c1e8970(struct PacketConfig1e8970 *a)
{
 a->flags0=0x03f3ffff;
 a->i4=1;a->i8=1;a->i12=0;a->i64=0;a->i16=0;a->i20=4;a->i24=0;
 a->i32=1;a->i36=1;a->i40=0;a->i44=8;a->i48=6;a->i52=0;a->i56=0;a->i60=2;
 a->i64=0;a->i68=0;a->i76=0;a->i84=0;a->i88=0;a->i92=4;a->i96=3;
 a->p108=0;a->i100=0;a->i104=0;
 a->f112=1.0f;a->f116=1.0f;a->f120=1.0f;a->f124=1.0f;
 a->f128=1.0f;a->f132=1.0f;a->f136=1.0f;a->f140=1.0f;
 a->flags160=0;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
void func_0c1e8a10(struct PacketConfig1e8970 *a)
{
 a->flags0=0x03f3ffff;
 a->i4=1;a->i8=1;a->i12=0;a->i64=0;a->i16=0;a->i20=4;a->i24=0;
 a->i32=1;a->i36=1;a->i40=0;a->i44=8;a->i48=6;a->i52=0;a->i56=0;a->i60=2;
 a->i64=0;a->i68=0;a->i76=0;a->i84=0;a->i88=0;a->i92=4;a->i96=3;
 a->p108=0;a->i100=0;a->i104=0;
 a->f112=1.0f;a->f116=1.0f;a->f120=1.0f;a->f124=1.0f;
 a->f128=1.0f;a->f132=1.0f;a->f136=1.0f;a->f140=1.0f;
 a->flags160=0x20000000;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
void func_0c1e8ab0(struct PacketConfig1e8970 *a)
{
 a->flags0=0x03f3ffff;
 a->i4=1;a->i8=1;a->i12=0;a->i64=0;a->i16=0;a->i20=4;a->i24=0;
 a->i32=1;a->i36=1;a->i40=0;a->i44=8;a->i48=6;a->i52=0;a->i56=0;a->i60=2;
 a->i64=0;a->i68=0;a->i76=0;a->i84=0;a->i88=0;a->i92=4;a->i96=3;
 a->p108=0;a->i100=0;a->i104=0;
 a->f112=1.0f;a->f116=1.0f;a->f120=1.0f;a->f124=1.0f;
 a->f128=1.0f;a->f132=1.0f;a->f136=1.0f;a->f140=1.0f;
 a->flags160=0;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
/* Retail wrapper advances between these configuration slots by 0xc0. */
struct PacketConfigSlot192 { struct PacketConfig1e8970 config; unsigned char unknown164[28]; };
extern struct PacketConfig1e8970 dat_0c312cb4;
extern struct PacketConfigSlot192 dat_0c312d74[3];
void func_0c1e8b60(struct PacketConfig1e8970 *a,int texture)
{
 a->flags0=0x00300008;a->i4=1;a->i8=1;a->i32=3;
 a->p108=&dat_0c357a00[texture];a->flags160=0;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
void func_0c1e8ba0(struct PacketConfig1e8970 *a,int texture)
{
 a->flags0=0x00300008;a->i4=1;a->i8=1;a->i32=3;
 a->p108=&dat_0c357a00[texture];a->flags160=0x20000000;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
void func_0c1e8be0(struct PacketConfig1e8970 *a,int texture)
{
 a->flags0=0x00300008;a->i4=1;a->i8=1;a->i32=3;
 a->p108=&dat_0c357a00[texture];a->flags160=0;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}
void func_0c1e8c20(void)
{
 func_0c1e88a0(&dat_0c312cb4);
 func_0c1e8b60(&dat_0c312d74[0].config,0);
 func_0c1e8ba0(&dat_0c312d74[1].config,0);
 func_0c1e8be0(&dat_0c312d74[2].config,0);
}

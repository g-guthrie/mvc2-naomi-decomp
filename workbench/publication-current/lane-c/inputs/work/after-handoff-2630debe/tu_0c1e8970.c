/* Native packet configuration before 2082e0 derives render header words. */
struct PacketConfig1e8970 {
 unsigned int flags0;
 int i4,i8,i12,i16,i20,i24;
 unsigned char unknown28[4];
 int i32,i36,i40,i44,i48,i52,i56,i60,i64,i68;
 unsigned char unknown72[4];
 int i76;
 unsigned char unknown80[4];
 int i84,i88,i92,i96,i100,i104,i108;
 float f112,f116,f120,f124,f128,f132,f136,f140;
 unsigned char generated144[16];
 unsigned int flags160;
};
struct PacketSubmission1e8970 { unsigned char unknown0[4]; void *header4; };
extern struct PacketSubmission1e8970 dat_0c3543b8;
extern void func_0c2082e0(struct PacketConfig1e8970 *);
extern void func_0c208a20(struct PacketSubmission1e8970 *,struct PacketConfig1e8970 *);
void func_0c1e8970(struct PacketConfig1e8970 *a)
{
 a->flags0=0x03f3ffff;
 a->i4=1;a->i8=1;a->i12=0;a->i64=0;a->i16=0;a->i20=4;a->i24=0;
 a->i32=1;a->i36=1;a->i40=0;a->i44=8;a->i48=6;a->i52=0;a->i56=0;a->i60=2;
 a->i64=0;a->i68=0;a->i76=0;a->i84=0;a->i88=0;a->i92=4;a->i96=3;
 a->i108=0;a->i100=0;a->i104=0;
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
 a->i108=0;a->i100=0;a->i104=0;
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
 a->i108=0;a->i100=0;a->i104=0;
 a->f112=1.0f;a->f116=1.0f;a->f120=1.0f;a->f124=1.0f;
 a->f128=1.0f;a->f132=1.0f;a->f136=1.0f;a->f140=1.0f;
 a->flags160=0;
 func_0c2082e0(a);func_0c208a20(&dat_0c3543b8,a);
}

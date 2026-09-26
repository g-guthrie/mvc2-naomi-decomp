#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct Control_0c2fb1f0 dat_0c2fb1f0;
extern int dat_0c2fb208,dat_0c2fb1f8;
extern void func_0c1f35d0(int),func_0c035106(int);
extern void func_0c1f3240(int,int,int),func_0c1fa8b0(int,int);
void func_0c033c74(int value)
{
    if (dat_0c2d6f84->b67 || dat_0c2d6f84->i20!=64) {
        func_0c1f35d0(value);
        dat_0c2fb208=value;
        func_0c035106(value);
    }
}
void func_0c033ca6(int value)
{
    func_0c1f35d0(value);dat_0c2fb208=value;func_0c035106(value);
}
void func_0c033cbe(void)
{
    func_0c1f3240(0,0x100a0,0);
}
void func_0c033cc8(signed char value)
{
    func_0c1f3240(value,0x1100a0,0);
}
void func_0c033cd8(void)
{
    func_0c1f3240(0,0x300a0,0);
}
void func_0c033ce2(signed char a,unsigned char b)
{
    b &= 0x7f;
    func_0c1f3240(a,0x4a0,b);
}
void func_0c033d00(unsigned char value)
{
    value &= 0x7f;
    func_0c1fa8b0(dat_0c2fb1f8,value);
}
void func_0c033d16(int a,unsigned char b)
{
    b &= 0x7f;func_0c1f3240(a,0xaa0,b);
}
void func_0c033d2a(int a,unsigned char b)
{
    b &= 0x7f;func_0c1f3240(a,0x9a0,b);
}
void func_0c033d3e(register unsigned char value)
{
    float amount;
    value &= 0x7f;
    amount=(int)(dat_0c2fb1f0.i84 % value);
    dat_0c2fb1f0.f52-=amount;
    if (dat_0c2fb1f0.f52<0.0f) dat_0c2fb1f0.f52=0.0f;
    func_0c1f3240(0,0x1a0,(unsigned char)(int)dat_0c2fb1f0.f52);
}

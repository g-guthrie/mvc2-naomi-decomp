#include "objects.h"
extern struct Control_0c2fb1f0 dat_0c2fb1f0;
extern void func_0c1f3240(int,int,int);
void func_0c033db8(register unsigned char value)
{
    float amount;
    value &= 0x7f;
    amount=(int)(dat_0c2fb1f0.i84 % value);
    dat_0c2fb1f0.values[0]+=amount;
    if (dat_0c2fb1f0.values[0]>(float)(int)dat_0c2fb1f0.i84)
        dat_0c2fb1f0.values[0]=(float)(int)dat_0c2fb1f0.i84;
    func_0c1f3240(0,0x1a0,(unsigned char)(int)dat_0c2fb1f0.values[0]);
}
void func_0c033e0e(int channel,register unsigned char value)
{
    float amount;
    register struct Control_0c2fb1f0 *control=&dat_0c2fb1f0;
    value &= 0x7f;
    amount=(int)(control->i84 % value);
    control->values[(unsigned short)channel]-=amount;
    if (control->values[(unsigned short)channel]<0.0f)
        control->values[(unsigned short)channel]=0.0f;
    func_0c1f3240(channel,0x10a0,(unsigned char)(int)control->values[(unsigned short)channel]);
}
void func_0c033e6c(int channel,register unsigned char value)
{
    float amount;
    register struct Control_0c2fb1f0 *control=&dat_0c2fb1f0;
    value &= 0x7f;
    amount=(int)(control->i84 % value);
    control->values[(unsigned short)channel]+=amount;
    if (control->values[(unsigned short)channel]>(float)(int)control->i84)
        control->values[(unsigned short)channel]=(float)(int)control->i84;
    func_0c1f3240(channel,0x10a0,(unsigned char)(int)control->values[(unsigned short)channel]);
}
void func_0c033ed6(register unsigned char value)
{
    value &= 0x7f;
    dat_0c2fb1f0.f48=-(float)(int)(dat_0c2fb1f0.i84 % value);
}
void func_0c033ef8(register unsigned char value)
{
    value &= 0x7f;
    dat_0c2fb1f0.f48=(int)(dat_0c2fb1f0.i84 % value);
}

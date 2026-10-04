#include "objects.h"
extern char dat_0c2f8cc4,dat_0c2f8cc5;
extern char dat_0c2f83fc[];
extern struct ActorFlags *dat_0c2d6f84;
void func_0c02bf60(void)
{
 int i,j;
 dat_0c2f8cc4=0;dat_0c2f8cc5=0;
 for(i=0;i<48;i+=4)for(j=0;j<4;j++)dat_0c2f83fc[i+j]=0;
 for(i=48;i<60;i+=4)for(j=0;j<4;j++)dat_0c2f83fc[i+j]=0;
}
int func_0c02bfa8(char x,char y)
{
 if(!((char *)dat_0c2d6f84)[0x2f])return 0;
 return dat_0c2f83fc[y*4+x];
}

/* Complete frame-update routine at 0x0c030ecc..0x0c030fc0.
 * Candidate: SHC currently emits 232 bytes instead of the retail 244-byte
 * unit. The pointer loop, global-field addressing and resulting literal
 * layout differ; no exact-code credit is claimed for this unit. */
#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char dat_0c2d7088[],dat_0c2f8338[];
extern void (*table_0c23b1ac[])(void);
extern void func_0c038fb8(void),func_0c0382a4(void),func_0c0377fc(void),func_0c026a28(void),func_0c0377d0(void),func_0c036568(void),func_0c037656(int),func_0c0261ec(void),func_0c02c314(void (*)(void));
void func_0c030ecc(void)
{
 unsigned char *p,*end;
 dat_0c2d6f84->b46=1;dat_0c2d6f84->b128++;
 table_0c23b1ac[dat_0c2d6f84->b2]();
 p=dat_0c2d7088;end=p+0x21d8;
 do{((struct Actor *)p)->w420=144;((struct Actor *)p)->w424=144;p+=0x5a4;}while(p<end);
 if(dat_0c2d6f84->i90!=-1)(dat_0c2d6f84->i90)++;
 func_0c038fb8();dat_0c2f8338[59]=(dat_0c2f8338[59]+1)&15;
 if(dat_0c2d6f84->s8){func_0c0382a4();func_0c0377fc();}
 func_0c026a28();func_0c0377d0();
 if(dat_0c2d6f84->s8){func_0c036568();func_0c037656(3);func_0c037656(4);func_0c037656(1);func_0c037656(2);}
 func_0c02c314(func_0c0261ec);
}

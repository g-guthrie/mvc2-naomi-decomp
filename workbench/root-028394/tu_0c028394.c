#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct ActorFlags dat_0c2d6f88;
extern unsigned char dat_0c2d6f24[];
extern unsigned int dat_0c28401c,dat_0c284018;
extern void func_0c0215f6(int);
extern void func_0c028154(void),func_0c0221d8(void),func_0c022354(void),func_0c02a894(void);
extern void func_0c1e9b20(void),func_0c1eae80(void),func_0c023060(void);
extern void func_0c02156c(void *);
extern void func_0c02c3e2(void),func_0c022526(void),func_0c021c9c(void),func_0c0223d4(void),func_0c034288(void),func_0c02ab2c(void),func_0c1e68dc(void),func_0c02c39a(void),func_0c02c4a2(void),func_0c0271de(void);
void func_0c028394(void)
{
    void (*begin)(void),(*sync)(void),(*finish)(void);
    void (*poll)(void *);
    void *first,*second;
    int zero;
    _builtin_set_fpscr(_builtin_get_fpscr()&~3U);
    dat_0c2d6f84=&dat_0c2d6f88;
    func_0c0215f6(0);
    func_0c028154();func_0c0221d8();func_0c022354();func_0c02a894();
    first=dat_0c2d6f24;second=dat_0c2d6f24+20;
    zero=0;
    begin=func_0c1e9b20;sync=func_0c1eae80;
    poll=func_0c02156c;finish=func_0c023060;
    for(;;){
        begin();sync();poll(first);poll(second);
        func_0c02c3e2();func_0c022526();func_0c021c9c();func_0c0223d4();func_0c034288();
        dat_0c28401c=zero;dat_0c284018=zero;
        func_0c02ab2c();func_0c1e68dc();func_0c02c39a();func_0c02c4a2();func_0c0271de();finish();
    }
}

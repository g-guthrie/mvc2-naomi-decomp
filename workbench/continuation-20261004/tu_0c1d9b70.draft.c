/* Complete four-function research draft; byte matching and admission pending. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct ActorFlags *dat_0c2d6f84;
extern void func_0c037688(struct LinkedActor *);
void func_0c1d9b98(struct LinkedActor *);
void func_0c1d9b70(void)
{
    struct LinkedActor *a;
    if((a=func_0c0374da(0,5,1))) {
        a->sdc.b12c=0;
        a->p16=func_0c1d9b98;
        a->wcc.dword_value=0x0c0d;
    }
}
extern int **dat_0c2d964c;
extern int func_0c1ec190(void);
extern struct LinkedActorVec3 dat_0c232934[];
extern float dat_0c2329a0[];
void func_0c1d9bb4(struct LinkedActor *);
void func_0c1d9cb4(struct LinkedActor *);
void func_0c1d9b98(struct LinkedActor *a)
{
    switch(a->b4) {
    case 0:func_0c1d9bb4(a);break;
    case 1:func_0c1d9cb4(a);break;
    }
}
void func_0c1d9bb4(struct LinkedActor *a)
{
    unsigned int phase;
    int *choices;
    unsigned int index;
    int choice;
    float *angles;
    if(++a->s28<120) return;
    a->s28=120;
    phase=(unsigned int)dat_0c2d6f84->i90;
    if(phase>500 && phase<1000) return;
    if(phase>3500) return;
    a->b4++;a->b5=0;a->s28=0;
    choices=*dat_0c2d964c;
    choice=func_0c1ec190();
    choice=choice<0?-(int)((0u-(unsigned int)choice)&3):(choice&3);
    a->p84=(void *)choices[choice+3];
    index=(unsigned int)func_0c1ec190()%9;
    *(struct LinkedActorVec3 *)&a->f52=dat_0c232934[index];
    angles=dat_0c2329a0;
    angles+=index*2;
    *(int *)((unsigned char *)a+68)=(int)angles[0];
    ((struct Actor *)a)->i72=(int)angles[1];
    ((struct Obj_tu5_03 *)a)->f120=1.0f;((struct Obj_tu5_03 *)a)->f124=1.0f;((struct Obj_tu5_03 *)a)->f128=((struct Obj_tu5_03 *)a)->f120;
}
void func_0c1d9cb4(struct LinkedActor *a)
{
    switch(a->b5) {
    case 0:
        a->s28++;
        a->sdc.b12c=a->s28%2;
        if(a->s28>=5) {
            a->b5++;
            a->s28=0;
            a->sdc.b12c=1;
            ((struct Obj_tu5_03 *)a)->f120=1.0f; ((struct Obj_tu5_03 *)a)->f124=1.0f; ((struct Obj_tu5_03 *)a)->f128=((struct Obj_tu5_03 *)a)->f120;
        }
        break;
    case 1:
        ((struct Obj_tu5_03 *)a)->f124=(((struct Obj_tu5_03 *)a)->f120-=0.066666670144f);
        ((struct Obj_tu5_03 *)a)->f128=((struct Obj_tu5_03 *)a)->f120;
        if(++a->s28>=15) {
            a->b4=0; a->sdc.b12c=0;
            if((unsigned int)dat_0c2d6f84->i90>4500) func_0c037688(a);
        }
        break;
    }
}

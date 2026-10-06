/* Operand decoder family draft; not registered or credited. */
#include "objects.h"
extern int func_0c04de10(struct Actor *);
extern void func_0c0519fc(struct Actor *);
#define FLAGS(a) ((a)->b495)
void func_0c04e6a8(struct Actor *a)
{
    a->b441=a->b440;
}
#pragma inline(read_operand_word)
static short read_operand_word(unsigned char *first,unsigned char *second)
{ unsigned int word=(unsigned short)((*first<<8)|*second); return (short)((word<<16)>>16); }
/* Record: stream pointer at 0, unsigned cursor at 4, command count at 7. */
void func_0c04e6b2(struct Actor *a,unsigned char *record,int mode)
{
    unsigned char *operand=*(unsigned char **)record+*(unsigned short *)(record+4);
    unsigned char *next=operand+1;
    switch(mode) {
    case 0:
        func_0c04e6a8(a);
        a->b440=*operand;
        (*(unsigned short *)(record+4))++;
        record[7]++;
        break;
    case 1:
        a->parameter4b4.integer=*operand;
        (*(unsigned short *)(record+4))++;
        break;
    case 2:
        a->parameter4b4.integer=(unsigned short)read_operand_word(operand,next);
        goto advance_word;
    case 3:
        a->parameter4b4.integer=read_operand_word(operand,next);
        a->parameter4b4.real=a->parameter4b4.integer*1.66666663f;
        goto advance_word;
    case 4:
        a->parameter4b4.integer=read_operand_word(operand,next);
        a->parameter4b4.real=a->parameter4b4.integer*2.1428571f;
        goto advance_word;
    }
    return;
advance_word:
    *(unsigned short *)(record+4)+=2;
}
int func_0c04e788(struct Actor *a)
{
    return func_0c04de10(a);
}
int func_0c04e78e(struct Actor *a,int mode)
{
    switch(mode) {
    case 0:
        if(a->b1f9==2) return 0;
        break;
    case 5:
        if(a->b1f9==2) return 0;
        if(FLAGS(a)&2) goto apply;
        break;
    case 2:
        if((!a->b14a)&0xe0) goto apply;
        break;
    }
    if(FLAGS(a)<0) return 1;
apply:
    if(!func_0c04e788(a)) return 0;
    if(FLAGS(a) && (FLAGS(a)&2)) {
        FLAGS(a)^=2;
        FLAGS(a)|=-128;
    }
    return 1;
}
int func_0c04e82a(struct Actor *a)
{
    if(FLAGS(a)) {
        if(FLAGS(a)<=0 && !(FLAGS(a)&2)) {
            FLAGS(a)&=17;
        } else if(FLAGS(a)>0 || (FLAGS(a)&16)) {
            FLAGS(a)=0;
            func_0c0519fc(a);
            return 0;
        } else {
            FLAGS(a)&=127;
        }
    }
    return 1;
}

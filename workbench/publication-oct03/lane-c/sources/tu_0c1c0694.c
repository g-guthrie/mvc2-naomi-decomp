#include "objects.h"
/* New observed record; move to shared header before any registration. */
struct SolMenuItemSet { int *entries; int count; };
extern struct SolMenuItemSet *dat_0c2fb43c;
extern struct SolMenuItemSet *dat_0c25c110[];
extern int dat_0c2fb440,dat_0c2fb444,dat_0c25c0b4[];
extern signed char dat_0c2fb438,dat_0c2fb439,dat_0c2fb43a,dat_0c2fb46c;
extern unsigned char dat_0c2d96a4;
extern unsigned short dat_0c2d6f24[20];
extern float dat_0c2fb448,dat_0c2fb44c,dat_0c2fb450;
extern struct Vec3_tu5_03 dat_0c2fb460,dat_0c25c040;
extern char dat_0c25c04c;
extern char *dat_0c25c058[];
extern char dat_0c22fcc4[],dat_0c22fcd4[],dat_0c22fce8[],dat_0c22fcf8[],dat_0c22fcfc[];
extern char dat_0c22fd00[],dat_0c22fd0c[],dat_0c22fd18[],dat_0c22fd2c[],dat_0c22fd40[];
extern void (*table_0c25c200[])(void);
extern int func_0c1c050c(unsigned char),func_0c1c047e(unsigned short,int,int),func_0c1c04a6(unsigned short,int,int);
extern void func_0c1c03c0(int);
extern void func_0c02c32e(int,int,int,char *,...),func_0c02c314(void (*)(void));
extern void func_0c1c0ba8(void);
extern void func_0c02aaac(void),func_0c0275bc(char *),func_0c0275d0(float),func_0c0267c4(void),func_0c0268b8(void);
extern void func_0c1d9278(int,int *),func_0c1d91d6(int,int *);
void func_0c1c0798(void);
void func_0c1c0694(void)
{
 int row=dat_0c2fb440/18,col=dat_0c2fb440%18,input;
 int i;
 input=func_0c1c050c(1);
 row=func_0c1c047e(input,row,1);col=func_0c1c04a6(input,col,17);
 dat_0c2fb440=row*18+col;
 if(dat_0c2d6f24[2]&0x360){dat_0c2fb438=2;dat_0c2fb439=0;}
 func_0c02c32e(2,5,4,dat_0c22fcc4);
 func_0c02c32e(2,7,4,dat_0c22fcd4);
 func_0c02c32e(2,8,4,dat_0c22fce8);
 func_0c02c32e(row*8+17,col+5,2,dat_0c22fcf8);
 for(i=0;(unsigned int)i<23;i++)func_0c02c32e(i/18*8+18,i%18+5,0,dat_0c22fcfc,dat_0c25c058[i]);
}
void func_0c1c0798(void)
{
 if(!dat_0c2fb440)dat_0c2fb448=50.0f;
 else if(dat_0c2fb440>=30)dat_0c2fb448=100.0f;
 else dat_0c2fb448=1000.0f;
 dat_0c2fb44c=0;dat_0c2fb450=0;dat_0c2fb460=dat_0c25c040;
}
void func_0c1c081c(void){table_0c25c200[dat_0c2fb439]();}
void func_0c1c082a(void)
{
 func_0c02aaac();
 if(dat_0c25c0b4[dat_0c2fb440]==1)dat_0c2d96a4=dat_0c2fb440+255;
 func_0c1c03c0(dat_0c25c0b4[dat_0c2fb440]);
 dat_0c2fb43c=dat_0c25c110[dat_0c2fb440];dat_0c2fb444=0;dat_0c2fb46c=0;
 func_0c1c0798();func_0c0275bc(&dat_0c25c04c);func_0c0275d0(1.0f);func_0c0267c4();func_0c0268b8();dat_0c2fb439=1;
}
void func_0c1c08ec(void)
{
 int input=func_0c1c050c(1),first_count,second_count;
 unsigned short held=dat_0c2d6f24[0],repeat=dat_0c2d6f24[8],pressed=dat_0c2d6f24[2];
 if(input&0x80){if(++dat_0c2fb46c>=3)dat_0c2fb46c=0;}
 if(held&0x200){
  if(held&0x400){dat_0c2fb450-=1.0f;if(dat_0c2fb450<0.0f)dat_0c2fb450=359.0f;}
  if(held&0x800){dat_0c2fb450+=1.0f;if(!(dat_0c2fb450<360.0f))dat_0c2fb450=0.0f;}
  if(held&0x2000){dat_0c2fb44c+=1.0f;if(!(dat_0c2fb44c<90.0f))dat_0c2fb44c=89.0f;}
  if(held&0x1000){dat_0c2fb44c-=1.0f;if(!(dat_0c2fb44c>-90.0f))dat_0c2fb44c=-89.0f;}
 }else if(held&0x40){
  if(held&0x400)dat_0c2fb460.x-=0.5f;
  if(held&0x800)dat_0c2fb460.x+=0.5f;
  if(held&0x2000)dat_0c2fb460.y-=0.5f;
  if(held&0x1000)dat_0c2fb460.y+=0.5f;
 }else {
  dat_0c2fb444=func_0c1c047e(input,dat_0c2fb444,dat_0c2fb43c->count-1);
  if(held&0x2000){
   if(repeat&0x2000)dat_0c2fb448-=0.5f;else dat_0c2fb448-=5.0f;
   if(!(dat_0c2fb448>2.0f))dat_0c2fb448=2.0f;
  }
  if(held&0x1000){
   if(repeat&0x1000)dat_0c2fb448+=0.5f;else dat_0c2fb448+=5.0f;
   if(!(dat_0c2fb448<10000.0f))dat_0c2fb448=10000.0f;
  }
 }
 if(pressed&0x100){if(++dat_0c2fb43a>=8)dat_0c2fb43a=0;}
 if(pressed&0x20)dat_0c2fb438=1;
 if(pressed&0x8000)func_0c1c0798();
 func_0c02c314(func_0c1c0ba8);
 if(dat_0c2fb46c==0||dat_0c2fb46c==1){
  func_0c02c32e(4,5,4,dat_0c22fd00,dat_0c25c058[dat_0c2fb440]);
  func_0c02c32e(4,6,4,dat_0c22fd0c,dat_0c2fb444);
  func_0c1d9278(dat_0c2fb43c->entries[dat_0c2fb444],&first_count);
  func_0c1d91d6(dat_0c2fb43c->entries[dat_0c2fb444],&second_count);
  func_0c02c32e(4,7,4,dat_0c22fd18,first_count);
  func_0c02c32e(4,8,4,dat_0c22fd2c,second_count);
  func_0c02c32e(22,27,4,dat_0c22fd40);
 }
}

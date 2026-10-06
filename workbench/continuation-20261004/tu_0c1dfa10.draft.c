/* Unverified vertex-frame family:552 linked bytes against548 native. Timing arithmetic register allocation and packed-frame loop layout still differ. */
#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d964c;
extern struct Vec3_tu5_03 dat_0c2332cc;
extern float dat_0c2332dc;
extern int dat_0c262400[],dat_0c262378[],dat_0d852038[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern float func_0c1ec2c0(int);
extern void *memcpy(void *,const void *,unsigned int);
void func_0c1dfa72(struct Obj_tu5_03 *);
void func_0c1dfb62(struct Obj_tu5_03 *,int,int,float);
void func_0c1dfa10(void){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))){
 a->b12c=1;a->p16=func_0c1dfa72;a->l84=((int *)dat_0c2d964c->p0)[1];a->lcc=0x807;a->pos=dat_0c2332cc;
 a->angles.scalar.l44=(int)(dat_0c2332dc*65536.0f/360.0f+0.5f)&65535;
 }
}
void func_0c1dfa72(struct Obj_tu5_03 *a){
 float weight;register float half;int current,next;
 a->w28++;
 if(a->w28>=dat_0c262400[a->w30]){a->w28=0;a->w30++;if((unsigned int)a->w30>=34)a->w30=0;}
 half=0.5f;
 weight=func_0c1ec2c0((int)((((float)a->w28/dat_0c262400[a->w30])*180.0f+-90.0f)*65536.0f/360.0f+half)&65535)*half+half;
 current=dat_0c262378[a->w30];
 if((unsigned int)(a->w30+1)>=34)next=dat_0c262378[0];else next=(dat_0c262378+a->w30)[1];
 func_0c1dfb62(a,current,next,weight);
}
void func_0c1dfb62(struct Obj_tu5_03 *a,int current,int next,float weight){
 struct Vec3_tu5_03 v,*start,*end,*frames;
 int count=dat_0d852038[0],*index=&dat_0d852038[2],i;
 frames=(struct Vec3_tu5_03 *)((char *)(dat_0d852038+count)+8);
 end=frames+count*next;start=frames+count*current;
 for(i=0;i<count;i++){
 struct Vec3_tu5_03 *to=end,*from=start;
 v.x=from->x+(to->x-from->x)*weight;
 v.y=from->y+(to->y-from->y)*weight;
 v.z=from->z+(to->z-from->z)*weight;
 memcpy((int *)a->l84+index[i],&v,12);
 ((int *)a->l84)[index[i]]|=1;
 start++;end++;
 }
}

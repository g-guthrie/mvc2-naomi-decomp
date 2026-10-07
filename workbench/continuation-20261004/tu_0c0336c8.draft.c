/* Unverified whole460-byte ranking update, including its internal pool. */
/* Fill a ranking record and insert it above records with smaller score keys. */
#include "objects.h"
extern struct RankingRecord24 dat_0c2f8528[];
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char dat_0c2d7088[];
#define SLOT_FIELD(member,offset) (*(unsigned char *)(dat_0c2d7088+(short)(signed char)dat_0c2d6f84->pad9b[0]*(short)0x5a4+(member)*0xb48+(offset)))
#define TICKS(p) ((p)->ticks)
void func_0c0336c8(struct PlayerSlotScore *player){
 struct RankingRecord24 temporary,*entry,*previous,*current;
 struct PlayerSlotScore *other;
 int other_side,index,prior,fill;
 index=player->actor.rank53d;other_side=(player->actor.b524^1)&1;
 prior=index-1;entry=&dat_0c2f8528[index];
 entry->characters[0]=SLOT_FIELD(0,0x52c);
 entry->characters[1]=SLOT_FIELD(1,0x52c);
 entry->characters[2]=SLOT_FIELD(2,0x52c);
 entry->colours[0]=SLOT_FIELD(0,0x4c9);
 entry->colours[1]=SLOT_FIELD(1,0x4c9);
 entry->colours[2]=SLOT_FIELD(2,0x4c9);
 entry->mode=dat_0c2d6f84->b88;entry->setting=player->actor.b527;
 entry->minutes=TICKS(player)/3600U;
 entry->seconds=(TICKS(player)/60U)%60U;
 entry->hundredths=((TICKS(player)%60U)*100U)/60U;
 fill=42;entry->name[0]=fill;entry->name[1]=fill;entry->name[2]=fill;entry->name[3]=fill;
 entry->secondary=player->actor.score538;
 entry->primary=player->actor.score534;
 other=(struct PlayerSlotScore *)(dat_0c2d7088+other_side*0x5a4);
 while(index){
 current=&dat_0c2f8528[index];previous=&dat_0c2f8528[prior];
 if(current->primary<previous->primary)break;
 if(current->primary==previous->primary && current->secondary<previous->secondary)break;
 if(other->actor.rank53d==prior)other->actor.rank53d=index;
 temporary=*previous;*previous=*current;*current=temporary;
 current->rank++;index--;prior--;previous->rank = previous->rank - 1;
 }
 player->actor.rank53d=index;
}

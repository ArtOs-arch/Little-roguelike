#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
   char name[30];
   int life;
   int max_life;
   int defense;
   int attack;
   int level;
   int potions;
   int exp;
} Player;
#endif
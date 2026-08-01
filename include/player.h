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
Player Player1 = {100, 100, 0, 5, 1, 0, 0};
#endif
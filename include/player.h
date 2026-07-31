#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
   char name[30];
   int life;
   int max_life;
   int defense;
   int level;
   int exp;
} Player;

Player Player1;
#endif
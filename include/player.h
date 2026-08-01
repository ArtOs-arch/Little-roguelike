#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
   char name[30];  //1
   int life;      // 2
   int max_life; // 3
   int defense; // 4
   int attack; // 5
   int level; // 6
   int exp;  // 7
} Player;

#endif
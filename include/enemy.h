#ifndef ENEMY_H
#define ENEMY_H   // "Player1 existe, está definido em outro arquivo"


typedef struct
{
    char name[40];
    int level;
    int life;
    int attack;
    int defense;
    int gold;
    int exp;
    char drop[4][40];
} Enemy;


#endif
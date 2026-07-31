#ifndef ENEMY_H
#define ENEMY_H

typedef struct{ 
 char name[40];
 int level;
 int life;
 int attack;
 int defense;
 int gold;
 int exp;
} Enemy;

Enemy Rat = {"BigRat",1,20,3,0,2,5};

Enemy Slime = {"Slime",2,30,4,1,4,8};

Enemy Globin = {"Globin",4,45,6,3,6,12};

Enemy Spider = {"Spider",6,60,8,3,18,9};

Enemy Skeleton = {"Skeleton",8,80,10,5,12,25};

#endif
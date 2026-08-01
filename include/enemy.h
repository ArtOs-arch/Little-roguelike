#ifndef ENEMY_H
#define ENEMY_H

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

Enemy Rat = {"BigRat", 1, 20, 3, 0, 2, 5,
{
    "Chave_enferrujada",
    "Maca",
    "Bandagem",
    "Pao"
}};

Enemy Slime = {"Slime", 2, 30, 4, 1, 4, 8,
{
    "Adaga",
    "Pocao_Pequena",
    "Cogumelo",
    "Escudo_de_Madeira"
}};

Enemy Globin = {"Globin", 4, 45, 6, 3, 6, 12,
{
    "Adaga_Goblin",
    "Capuz_Goblin",
    "Pocao_Pequena",
    "Pao"
}};

Enemy Spider = {"Spider", 6, 60, 8, 3, 18, 9,
{
    "Antidoto",
    "Pocao_Media",
    "Botas_Leves",
    "Bomba_de_Fumaca"
}};

Enemy Skeleton = {"Skeleton", 8, 80, 10, 5, 12, 25,
{
    "Espada_Enferrujada",
    "Escudo_Velho",
    "Pocao_Media",
    "Kit_Medico"
}};

#endif
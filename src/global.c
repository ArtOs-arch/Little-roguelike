#include "global.h"

// =============================================
//  DEFINIÇÕES DE TODAS AS VARIÁVEIS GLOBAIS
// =============================================

// Herói
Player Player1 = {"", 100, 100, 0, 5, 1, 0, 0};

// Inimigos
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

// Variáveis de controle
int run = 0;
int vivo = 1;
int drop;

// Inimigos
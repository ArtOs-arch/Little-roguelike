#ifndef ROOMS_H
#define ROOMS_H

// Variáveis globais (compartilhadas)
extern int level;
extern int life;
extern int attack;
extern int potions;
extern int defense;
// Protótipos das funções das salas
void Room1();
void Room2();
void Room3();
void Room4();
void Room5();

// Prototipo das funçoes
void aliveF();
void potionF();
#endif
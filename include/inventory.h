#ifndef INVENTORY_H
#define INVENTORY_H

typedef struct {
    char nome[30];
    int bonus;
    char tipo[20];   // "Cura", "Arma", "Armadura"
} Item;

typedef struct {
 char Slots[5][30];
 int potions;
} Inventory;

#endif
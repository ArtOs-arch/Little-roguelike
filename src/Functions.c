
#include <stdio.h>
#include "player.h"
#include "enemy.h"
#include "Rooms.h"
#include <stdlib.h>
#include "global.h"
extern int run;
// o F na frente dos nomes significa FUNÇÃO
void potionF()
{
    if (Inv.potions > 0)
    {
        Player1.life = Player1.life + 15;
        Inv.potions = Inv.potions - 1;
        if (Player1.life > 100)
        {
            Player1.life = 100;
        }
        printf("Voce tomou uma poçao! (+15 de life)\n");
        printf("Poções restantes: %d\n", Inv.potions);
    }
    else
    {
        printf("voce nao tem poçoes restantes.");
    }
}

// funçao do SE nao estiver vivo
void aliveF()
{
    if (Player1.life <= 0)
    {
        printf("Voce esta morto.");
    }
}

void runF()
{
    printf("Voce fugiu! Que vergonha...\n");
    run = 1;
}

void dropF(Enemy inimigo)
{
    int sorteio = rand() % 100 + 1;
    int Drop = 0; // 1 = dropou 0 = nao dropou
    if (sorteio <= 20)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[0]);
        Player1.exp = Player1.exp + inimigo.exp;
        Drop = 1;
    }
    else if (sorteio <= 40)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[1]);
        Player1.exp = Player1.exp + inimigo.exp;
        Drop = 1;
    }
    else if (sorteio <= 60)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[2]);
        Player1.exp = Player1.exp + inimigo.exp;
        Drop = 1;
    }
    else if (sorteio <= 80)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[3]);
        Player1.exp = Player1.exp + inimigo.exp;
        Drop = 1;
    }
    else
    {
        printf("nenhum drop.\n");
        Drop = 0;
    }

    if (Drop == 1)
    {
        int escolha;
        printf("1-coletar\n");

        printf("2-largar\n");

        printf("voce deseja coletar ou largar:\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            printf("Voce pega o item.\n");
        }
        else
        {
            printf("Voce larga o item.\n");
        }
    }
}

void levelF()
{
    if (Player1.exp >= 100)
    {
        Player1.level++;
        Player1.max_life = Player1.max_life + 5;
        Player1.attack = Player1.attack + 1;
        Player1.defense = Player1.defense + 1;
        Player1.exp = 0;
    }
}
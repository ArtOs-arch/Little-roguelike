
#include <stdio.h>
#include "player.h"
#include "enemy.h"
#include "Rooms.h"

extern int potions;
extern int life;
extern int run;
// o F na frente dos nomes significa FUNÇÃO
void potionF()
{
    if (potions > 0)
    {
        life = life + 15;
        potions = potions - 1;
        if (life > 100)
        {
            life = 100;
        }
        printf("Voce tomou uma poçao! (+15 de life)\n");
        printf("Poções restantes: %d\n", potions);
    }
    else
    {
        printf("voce nao tem poçoes restantes.");
    }
}

// funçao do SE nao estiver vivo
void aliveF()
{
    if (life <= 0)
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
        Drop = 1;
    }
    else if (sorteio <= 40)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[1]);
        Drop = 1;
    }
    else if (sorteio <= 60)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[2]);
        Drop = 1;
    }
    else if (sorteio <= 80)
    {
        printf("%s dropou %s!\n", inimigo.name, inimigo.drop[3]);
        Drop = 1;
    }
    else
    {
        printf("nenhum drop.");
        Drop = 0;
    }

    if (Drop == 1)
    {
        int escolha;
        printf("1-coletar\n");

        printf("2-largar");

        printf("voce deseja coletar ou largar:\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            prinf("Voce pega o item.");
        }
        else
        {
            printf("Voce larga o item.");
        }
    }
}

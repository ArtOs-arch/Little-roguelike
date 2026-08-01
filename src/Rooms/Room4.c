#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room4()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 4 -----\n");
    printf("Grossas teias cobrem as paredes e o teto da sala...\n");
    printf("Uma Aranha Gigante desce lentamente, bloqueando sua passagem!\n");

    while (Player1.life > 0 && Spider.life > 0 && run == 0)
    {
        printf("\nSua Vida: %d | Vida da Aranha: %d\n", Player1.life, Spider.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar pocao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce golpeia a Aranha, causando %d de dano!\n", Player1.attack);
            Spider.life = Spider.life - Player1.attack;

            if (Spider.life > 0)
            {
                printf("A Aranha avanca e crava suas presas em voce, causando %d de dano!\n", Spider.attack);
                Player1.life = (Player1.life + Player1.defense) - Spider.attack;
            }
            else
            {
                printf("A Aranha se contorce por alguns instantes antes de tombar sem vida.\n");

                dropF(Spider);
            }
            break;

        case 2:
            potionF();
            break;

        case 3:
            runF();
            break;

        default:
            printf("Opcao invalida!\n");
        }
    }

    aliveF();
}
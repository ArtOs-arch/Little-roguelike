#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room1()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um rato enorme salta das sombras, exibindo seus dentes afiados!\n");

    while (Player1.life > 0 && Rat.life > 0 && run == 0)
    {
        printf("\nSua Vida: %d | Vida do Rat: %d\n", Player1.life, Rat.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar pocao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce desfere um golpe no Rat, causando %d de dano!\n", Player1.attack);
            Rat.life = Rat.life - Player1.attack;

            if (Rat.life > 0)
            {
                printf("O Rat avanca rapidamente e morde voce, causando %d de dano!\n", Rat.attack);
                Player1.life = Player1.life - Rat.attack;
            }
            else
            {
                printf("Com um ultimo guincho, o Rat cai sem vida no chao.\n");

                dropF(Rat);
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
            break;
        }
    }

    aliveF();
}
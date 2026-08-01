#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room5()
{
    int açao;
    int fugir = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 5 -----\n");
    printf("Um Esqueleto spawnou, CUIDADO! (life: 70)\n");

    while (Player1.life > 0 && Skeleton.life > 0 && fugir == 0)
    {
        printf("\nSua life: %d | life do Peidax: %d\n", Player1.life, Skeleton.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &açao);

        switch (açao)
        {
        case 1:
            printf("Voce ataca o Peidax causando %d de damage!\n", Player1.attack);
            Skeleton.life = Skeleton.life - Player1.attack;

            if (Skeleton.life > 0)
            {
                printf("O Peidax te da um ratio causando %d de damage!\n", Skeleton.attack);
                Player1.life = (Player1.life + Player1.defense) - Skeleton.attack;
            }
            else
            {
                printf("O Peidax foi derrotado!\n");
                printf("isso que voce fez foi realmente bem loco.\n");
                int drop = rand() % 100 + 1;
                int escolha;
                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Peidax dropou uma batatinha e umas potions!\n");

                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        Player1.attack = Player1.attack + 30;
                        Player1.potions = Player1.potions + 10;
                        printf("Voce coletou o batatinha! + 30 de attack e umas potionszinhas.\n");
                    }
                    else
                    {
                        printf("voce larga os itens.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Peidax dropou um dente... Estranho.\n");
                }
            }
            break;

        case 2:
            potionF();
            break;

        case 3:
           runF();
            break;

        default:
            printf("Opção inválida!\n");
        }
    }

    aliveF();
}
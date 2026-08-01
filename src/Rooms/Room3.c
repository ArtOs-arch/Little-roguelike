#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "player.h"
#include "enemy.h"

void Room3()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 3 -----\n");
    printf("Um Globin apareceu do nada! (life: 45)\n");

    while (Player1.life > 0 && Globin.life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do Globin: %d\n", Player1.life, Globin.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce refuta o Globin causando %d de damage!\n",Player1.attack);
            Globin.life = Globin.life - Player1.attack;

            if (Globin.life > 0)
            {
                printf("O Globin usa seu attack 'Só mais uma feature...' causando %d de damage!\n", Globin.attack);
                Player1.life = (Player1.life + Player1.defense) - Globin.attack;
            }
            else
            {
                printf("O Globin foi derrotado!\n");
                int drop = rand() % 100 + 1;

                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Globin dropou um tenis mecanico!\n");
                    int escolha;
                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        Player1.life = Player1.life + 13;
                        printf("Voce coletou o tenis! + 10 de life.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Globin dropou uma meia molhada... inútil.\n");
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
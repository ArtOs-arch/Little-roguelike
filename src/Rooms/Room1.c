#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room1()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um Rat apareceu no meio do espediente! (life: 25)\n");

    while (Player1.life > 0 && Rat.life > 0 && run == 0)
    {
        printf("\nSua Vida: %d | Vida do Rat: %d\n", Player1.life, Rat.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce refuta o Rat causando %d de damage!\n", Player1.attack);
            Rat.life = Rat.life - Player1.attack;

            if (Rat.life > 0)
            {
                printf("O Rat usa seu attack 'Só mais uma feature...' causando %d de damage!\n", Rat.attack);
                Player1.life = Player1.life - Rat.attack;
            }
            else
            {
                printf("O Rat foi derrotado!\n");
                int drop = rand() % 100 + 1;

                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Rat dropou um Teclado mecanico!\n");
                    int escolha;
                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        Player1.attack = Player1.attack + 3;
                        printf("Voce coletou o Teclado! + 3 de attack.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Rat dropou um papel com um numero de whatts... inútil.\n");
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
            break;
        }
    }

    aliveF();
}
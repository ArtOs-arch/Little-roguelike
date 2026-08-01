#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "player.h"
#include "enemy.h"

void Room4()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 4 -----\n");
    printf("Um Spider spawnou! (life: 60)\n");

    while (Player1.life > 0 && Spider.life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do Spider: %d\n", Player1.life, Spider.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce ataca o Spider causando %d de damage!\n", Player1.attack);
            Spider.life = Spider.life - Player1.attack;

            if (Spider.life > 0)
            {
                printf("O Spider usao attack ':wq' causando %d de damage!\n", Spider.attack);
                Player1.life = (Player1.life + Player1.defense) - Spider.attack;
            }
            else
            {
                printf("O Spider foi derrotado!\n");
                printf("isso que voce fez foi surreal.\n");
                int drop = rand() % 100 + 1;
                int escolha;
                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Spider dropou O NEOVIM!\n");

                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        Player1.attack = Player1.attack + 10;
                        printf("Voce coletou o NEOVIM! + 5 de attack.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Spider dropou um Emacs... Nada util.\n");
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

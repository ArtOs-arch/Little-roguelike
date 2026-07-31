#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"

void Room4() {
    int vimUser_life = 60;
    int vimUser_damage = 20;
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um vimUser spawnou! (life: 60)\n");

    while (life > 0 && vimUser_life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do vimUser: %d\n", life, vimUser_life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce ataca o vimUser causando %d de damage!\n", attack);
         vimUser_life = vimUser_life - attack;

            if  (vimUser_life > 0)
            {
                printf("O vimUser usao attack ':wq' causando %d de damage!\n", vimUser_damage);
                life = (life + defense) - vimUser_damage;
            }
            else
            {
                printf("O vimUser foi derrotado!\n");
                printf("isso que voce fez foi surreal.\n");
                int drop = rand() % 100 + 1;
                int escolha;
                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O vimUser dropou O NEOVIM!\n");

                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        attack = attack + 10;
                        printf("Voce coletou o NEOVIM! + 5 de attack.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O vimUser dropou um Emacs... Nada util.\n");
                }
            }
            break;

        case 2:
            potionF();
            break;

        case 3:
            printf("Voce fugiu! eu particulamente te entendo um pouco\n");
            run = 1;
            break;

        default:
            printf("Opção inválida!\n");
        }
    }

    if (life <= 0)
    {
        printf("\nVOCE MORREU! Game Over...\n");
    }
}
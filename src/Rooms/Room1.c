#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
void Room1()
{
    int cliente_life = 25;
    int cliente_damage = 5;
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um Cliente apareceu no meio do espediente! (life: 25)\n");

    while (life > 0 && cliente_life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do cliente: %d\n", life, cliente_life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce refuta o Cliente causando %d de damage!\n", attack);
            cliente_life = cliente_life - attack;

            if (cliente_life > 0)
            {
                printf("O Cliente usa seu attack 'Só mais uma feature...' causando %d de damage!\n", cliente_damage);
                life = life - cliente_damage;
            }
            else
            {
                printf("O Cliente foi derrotado!\n");
                int drop = rand() % 100 + 1;

                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Cliente dropou um Teclado mecanico!\n");
                    int escolha;
                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        attack = attack + 3;
                        printf("Voce coletou o Teclado! + 3 de attack.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Cliente dropou um papel com um numero de whatts... inútil.\n");
                }
            }
            break;

        case 2:
            potionF();
            break;

        case 3:
            printf("Voce fugiu! Que vergonha...\n");
            run = 1;
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    aliveF();
}
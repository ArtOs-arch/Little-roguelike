#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"

void Room2()
{
    int fiscal_life = 35;
    int fiscal_damage = 10;
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 2 -----\n");
    printf("Um Fiscal spawnou! (life: 25)\n");

    while (life > 0 && fiscal_life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do Fiscal: %d\n", life, fiscal_life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce ataca o Fiscal causando %d de damage!\n", attack);
            fiscal_life = fiscal_life - attack;

            if (fiscal_life > 0)
            {
                printf("O Fiscal usa seu attack 'Declarou a variável?' causando %d de damage!\n", fiscal_damage);
                life = (life + defense) - fiscal_damage;
            }
            else
            {
                printf("O Fiscal foi derrotado!\n");
                printf("Voce cometeu um erro de sintaxe...");
                int drop = rand() % 100 + 1;

                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O Fiscal dropou O compilador !\n");
                    int escolha;
                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        life = life + 10;
                        printf("Voce coletou o compilador! + 10 de life!.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O Fiscal dropou um pendrive... melhor não plugar.\n");
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

    if (life <= 0)
    {
        printf("\nVOCE MORREU! Game Over...\n");
    }
}
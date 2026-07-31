#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"

void Room5()
{
    int Peidax_life = 70;
    int Peidax_damage = 30;
    int açao;
    int fugir = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um PEIDAX spawnou, CUIDADO TOTAL! (life: 70)\n");

    while (life > 0 && Peidax_life > 0 && fugir == 0)
    {
        printf("\nSua life: %d | life do Peidax: %d\n", life, Peidax_life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &açao);

        switch (açao)
        {
        case 1:
            printf("Voce ataca o Peidax causando %d de damage!\n", attack);
            Peidax_life = Peidax_life - attack;

            if (Peidax_life > 0)
            {
                printf("O Peidax te da um ratio causando %d de damage!\n", Peidax_damage);
                life = (life + defense) - Peidax_damage;
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
                        attack = attack + 30;
                        potions = potions + 10;
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
            printf("Voce fugiu! eu particulamente te entendo um pouco\n");
            fugir = 1;
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
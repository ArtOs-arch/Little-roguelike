#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"

void Room3()
{
    int npc_life = 35;
    int npc_damage = 10;
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 1 -----\n");
    printf("Um npc apareceu do nada ! (life: 35)\n");

    while (life > 0 && npc_life > 0 && run == 0)
    {
        printf("\nSua life: %d | life do npc: %d\n", life, npc_life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar poçao\n");
        printf("3 - run\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce refuta o npc causando %d de damage!\n", attack);
            npc_life = npc_life - attack;

            if (npc_life > 0)
            {
                printf("O npc usa seu attack 'Só mais uma feature...' causando %d de damage!\n", npc_damage);
                life = (life + defense) - npc_damage;
            }
            else
            {
                printf("O npc foi derrotado!\n");
                int drop = rand() % 100 + 1;

                if (drop % 2 == 0)
                { // par = drop bom
                    printf("O npc dropou um tenis mecanico!\n");
                    int escolha;
                    printf("1-coletar\n");

                    printf("2-largar\n");

                    printf("voce deseja coletar ou largar:\n");
                    scanf("%d", &escolha);

                    if (escolha == 1)
                    {
                        life = life + 13;
                        printf("Voce coletou o tenis! + 10 de life.\n");
                    }
                    else
                    {
                        printf("voce larga o item.");
                    }
                }
                else
                { // ímpar = drop fraco
                    printf("O npc dropou uma meia molhada... inútil.\n");
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
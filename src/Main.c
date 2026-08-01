#include <raylib.h>
#include "title.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Rooms.h"
#include "player.h"
#include "global.h"

// Definição das variáveis globais

int main()
{
    int opcao;
    int rooms;
    srand(time(NULL));
    do
    {
        printf("%s",TITLE);
        printf("1 - Jogar\n");
        printf("2 - Ver status\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
       
        switch (opcao)
        {
        case 1:
            printf("Como devo te chamar?\n");
            printf("Nome:");
            scanf("%s",Player1.name);
            printf("Olá %s\n", Player1.name);
            printf("Viajando...\n");
            printf("Escolha uma sala (1-5): ");
            scanf("%d", &rooms);

            switch (rooms)
            {
            case 1:
                Room1();
                break;
            case 2:
                Room2();
                break;
            case 3:
                Room3();
                break;
            case 4:
                Room4();
                break;
            case 5:
                Room5();
                break;
            default:
                printf("Sala inválida!\n");
            }
            break;

        case 2:
            printf("\n--- STATUS ---\n");
            printf("life: %d\n", Player1.life);
            printf("attack: %d\n", Player1.attack);
            printf("Poções: %d\n", Inv.potions);
            break;

        case 3:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}
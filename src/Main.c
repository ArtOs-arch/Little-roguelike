#include <raylib.h>
#include "title.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Rooms.h"

// Definição das variáveis globais (único lugar!)
int level = 1;
int life = 100;
int defense = 5;
int attack = 10;
int potions = 3;
int vivo = 1; // 0 = morto 1 = vivo

int main()
{
    int opcao;
    int rooms;
    srand(time(NULL));
    do
    {
        printf("%s", TITLE);
        printf("1 - Jogar\n");
        printf("2 - Ver status\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
       
        switch (opcao)
        {
        case 1:
            printf("Entrando...\n");
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
            printf("life: %d\n", life);
            printf("attack: %d\n", attack);
            printf("Poções: %d\n", potions);
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
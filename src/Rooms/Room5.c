#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room5()
{
    int açao;
    int fugir = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 5 -----\n");
    printf("Um frio percorre a espinha enquanto ossos se chocam no escuro...\n");
    printf("Um Esqueleto Guerreiro ergue sua espada enferrujada e avanca!\n");

    while (Player1.life > 0 && Skeleton.life > 0 && fugir == 0)
    {
        printf("\nSua Vida: %d | Vida do Esqueleto: %d\n", Player1.life, Skeleton.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar pocao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &açao);

        switch (açao)
        {
        case 1:
            printf("Voce golpeia o Esqueleto, causando %d de dano!\n", Player1.attack);
            Skeleton.life = Skeleton.life - Player1.attack;

            if (Skeleton.life > 0)
            {
                printf("O Esqueleto balanca sua espada enferrujada e atinge voce, causando %d de dano!\n", Skeleton.attack);
                Player1.life = (Player1.life + Player1.defense) - Skeleton.attack;
            }
            else
            {
                printf("Os ossos do Esqueleto se espalham pelo chao com um forte estrondo.\n");

                dropF(Skeleton);
            }
            break;

        case 2:
            potionF();
            break;

        case 3:
            runF();
            break;

        default:
            printf("Opcao invalida!\n");
        }
    }

    aliveF();
}
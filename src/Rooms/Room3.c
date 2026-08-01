#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room3()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 3 -----\n");
    printf("Voce ouve uma risada maliciosa ecoando pela sala...\n");
    printf("Um Goblin salta de tras de algumas caixas, empunhando uma adaga enferrujada!\n");

    while (Player1.life > 0 && Goblin.life > 0 && run == 0)
    {
        printf("\nSua Vida: %d | Vida do Goblin: %d\n", Player1.life, Goblin.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar pocao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce atinge o Goblin, causando %d de dano!\n", Player1.attack);
            Goblin.life = Goblin.life - Player1.attack;

            if (Goblin.life > 0)
            {
                printf("O Goblin avanca rapidamente e desfere um golpe com sua adaga, causando %d de dano!\n", Goblin.attack);
                Player1.life = (Player1.life + Player1.defense) - Goblin.attack;
            }
            else
            {
                printf("O Goblin cai de joelhos e solta um ultimo grunhido antes de tombar.\n");

                dropF(Goblin);
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
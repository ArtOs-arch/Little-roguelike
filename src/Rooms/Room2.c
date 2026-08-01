#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "global.h"

void Room2()
{
    int action;
    int run = 0; // 0 = continua, 1 = fugiu

    printf("----- SALA 2 -----\n");
    printf("Uma estranha substancia verde comeca a se mover...\n");
    printf("Um Slime viscoso surge lentamente do chao!\n");

    while (Player1.life > 0 && Slime.life > 0 && run == 0)
    {
        printf("\nSua Vida: %d | Vida do Slime: %d\n", Player1.life, Slime.life);
        printf("O que voce faz?\n");
        printf("1 - Atacar\n");
        printf("2 - Usar pocao\n");
        printf("3 - Fugir\n");
        printf("Escolha: ");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            printf("Voce corta o Slime, causando %d de dano!\n", Player1.attack);
            Slime.life = Slime.life - Player1.attack;

            if (Slime.life > 0)
            {
                printf("O Slime salta sobre voce e o envolve com seu corpo gelatinoso, causando %d de dano!\n", Slime.attack);
                Player1.life = (Player1.life + Player1.defense) - Slime.attack;
            }
            else
            {
                printf("O Slime perde a forma e se dissolve em uma pequena poca esverdeada.\n");

                dropF(Slime);
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
            break;
        }
    }

    aliveF();
}
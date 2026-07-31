
#include <stdio.h>
extern int potions;
extern int life;
extern int run;
//o F na frente dos nomes significa FUNÇÃO
void potionF()
{
    if (potions > 0)
    {
        life = life + 15;
        potions = potions - 1;
        if (life > 100)
        {
            life = 100;
        }
        printf("Voce tomou uma poçao! (+15 de life)\n");
        printf("Poções restantes: %d\n", potions);
    }
    else
    {
        printf("voce nao tem poçoes restantes.");
    }
}

// funçao do SE nao estiver vivo
void aliveF(){
    if (life <= 0){
        printf("Voce esta morto.");
    }
}

void runF(){
    printf("Voce fugiu! Que vergonha...\n");
            run = 1;
}
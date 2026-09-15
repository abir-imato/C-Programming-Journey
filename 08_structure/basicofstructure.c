#include <stdio.h>

int main()
{
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    
    struct pokemon pikachu;
    printf("Enter the hp of pikachu: ");
    scanf("%d",& pikachu.hp);
   // pikachu.hp=60;
    pikachu.speed=80;//dot operator
    pikachu.attack=100;
    pikachu.tier='A';

    struct pokemon charizard;
    charizard.hp=80;
    charizard.speed=100;
    charizard.attack=130;
    charizard.tier='s';

    struct pokemon mewtwo;
    mewtwo.hp=100;
    mewtwo.speed=180;
    mewtwo.attack=170;
    mewtwo.tier='G';

    printf("%d\n",pikachu.hp);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    typedef struct pokemon {
        char name [50];
        int hp;
        int speed;
        int defense;
        char tier;
    } pokemon;

    typedef struct legendary{
        pokemon normal;
        char ability[100];
    }legendary;

    typedef struct godpokemon{
        legendary legend;
      int specialattack;

    } godpokemon;

    godpokemon arceus;

    typedef struct GOAT{
        godpokemon god;
        char virtue [100];
    }GOAT;

    GOAT Messi;

    arceus.specialattack = 300;
   strcpy(arceus.legend.ability,"Turn into stone");
   arceus.legend.normal.hp=1000;
   Messi.god.legend.normal.hp=999999999;
   printf("%d", Messi.god.legend.normal.hp);




    return 0;
}
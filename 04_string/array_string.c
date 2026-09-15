#include <stdio.h>
#include<string.h>
int main()
{
   typedef struct pokemon {
        char  name [50];
        int attack;
        int hp;
        char tire;
        
    }pokemon;

    pokemon arr[3];
    strcpy(arr[0].name,"Charizard");
    arr[0].attack=120;
    arr[0].hp=200;
    arr[0].tire='A';
    
    strcpy(arr[1].name,"Mewtwo");
    arr[1].attack=100;
    arr[1].hp=150;
    arr[1].tire='B';

    strcpy(arr[2].name,"Pikachu");
    arr[2].attack=120;
    arr[2].hp=80;
    arr[2].tire='C';

    for(int i=0;i<3;i++)
       {
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%c\n",arr[i].tire);
        printf("\n");
       }

    return 0;
}
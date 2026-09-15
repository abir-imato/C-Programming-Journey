#include <stdio.h>
#include <string.h>
#include<stdbool.h>


    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;

    void fun(pokemon p){
        printf("%d",p.hp);
    }
    int main(){
        pokemon pikachu;
        pikachu.hp=200;
        fun(pikachu);
         return 0;

    }

    

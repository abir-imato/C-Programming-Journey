#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Mark : ");
    scanf("%d",&a);

    if(a>=80){
                                 printf("A+ ");
    }
else if(a>=70){
                                              printf("A ");
    }

    else if(a>=60){
                                                               printf("A- ");
    }

     else if(a>=50){
                                              printf("B ");
    }
    else{
                                 printf("Fail");
        
    }

    return 0;
}
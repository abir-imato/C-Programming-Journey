#include <stdio.h>

int main()
{
    int a,b,i,power;

    printf("Enter the number of a :");
    scanf("%d",&a);

     printf("Enter the number of b :");
    scanf("%d",&b);

    for(i=1;i<=b;i++){
        power=power*a;
    }
    printf("Power is :%d",power);

    return 0;
}
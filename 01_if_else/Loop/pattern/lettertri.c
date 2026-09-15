#include <stdio.h>
 int main()
{
    int n,i,j,d;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        d=65;

        for(j=1;j<=i;j++){

            char ch =(char)d;

            printf("%c",ch);

            d++;

        }

        printf("\n");
    }
    return 0;
}
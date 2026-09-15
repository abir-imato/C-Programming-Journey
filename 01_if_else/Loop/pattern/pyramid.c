#include <stdio.h>

int main()
{
    int n , i,j,k;

    printf("Enter the value of n :");
    scanf("%d",&n);

    int nsp = n-1;

    for(i=1;i<=n;i++)
       {
        for(k=1;k<=nsp;k++)
           {
            printf(" ");
           
           }
            nsp--;

        for(j=1;j<=2*i-1;j++)
           {
            printf("*");
           }
           printf("\n");
       }
    return 0;
}
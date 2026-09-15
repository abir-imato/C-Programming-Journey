#include <stdio.h>

int main()
{
    int n,i,j;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

         printf("\n");

    }
    return 0;
}
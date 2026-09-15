#include <stdio.h>

int main()
{
    int n,m;

    printf("Enter n : ");
    scanf("%d",&n);

     printf("Enter m : ");
    scanf("%d",&m);

    for(int i =1;i<=n;i++)
    {
        for(int j =1 ; j<=n ; j++)
        {
            if (j==n || i==m)
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
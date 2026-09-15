#include <stdio.h>

int main()
{
    int i,n,m;

    printf("Enter the number of row : ");
    scanf("%d",&n);

    printf("Enter the number of column : ");
    scanf("%d",&m);

    for(i=1;i<=n;i++){
       
        for(int j=1;j<=m;j++){
            printf("%d ",j);

        }

            printf("\n");

    }

    return 0;
}
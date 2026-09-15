#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);

    int m;
    printf("Enter the number of coloumns :");
    scanf("%d",&m);

    int arr[n][m];

    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
           {
            printf("Enter the data of %d,%d :",i,j);
            scanf("%d",&arr[i][j]);
           }
       }

    for(int i=0;i<n;i++)
       {
        for(int j=i;j<m;j++)
           {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
           }
       }

    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
           {
            printf("%d ",arr[i][j]);
           }
           printf("\n");
       }   
    return 0;
}
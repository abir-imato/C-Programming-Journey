#include <stdio.h>

int main()
{
    //input of 1st matrix
    int m,n;
    printf("Enter the number of row of 1st matrix:");
    scanf("%d",&m);

     printf("Enter the number of coloumn of 1st matrix:");
    scanf("%d",&n);

    int arr[m][n];

    for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++)
           {
            printf("Enter the value %d,%d",i,j);
            scanf("%d",&arr[i][j]);
           }
       }

      
    for(int i=0;i<m;i++)
       {
        if(i%2==0)
          {
            for(int j=0;j<n;j++)
               {
                printf("%d ",arr[i][j]);
               }
          }
          else
          {
            for(int j=n-1;j>=0;j--)
               {
                printf("%d ",arr[i][j]);
               }
          }
          printf("\n");
       }


    return 0;
}
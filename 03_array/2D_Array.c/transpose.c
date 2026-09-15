#include <stdio.h>

int main()
{
    int n;
     printf("Enter the number of rows : ");
    scanf("%d",&n);
   
    int m;
     printf("Enter the number of coloumns : ");
    scanf("%d",&m);

    int arr[n][m];
 
   for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
           {
            printf("\nEnter the number of %d,%d:",i,j);
            scanf("%d",&arr[i][j]);
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

    printf("\n");

   int brr[m][n];

   for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
           {
            printf("%d ",arr[j][i]);
            brr[i][j]=arr[j][i];
           }
           printf("\n");
      }   
    printf("\n");
    for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
           {
            printf("%d ",brr[i][j]);
           }
           printf("\n");
      }     
       return 0;
}
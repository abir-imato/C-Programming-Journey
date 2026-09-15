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
    int sum=0;

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

    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
           {
            sum=sum+arr[i][j];
           }
       }
       printf("sum=%d\n",sum);
   int max=arr[0][0];
   int a,b;
    for(int i=0;i<n;i++)
    
       {
        for(int j=0;j<m;j++)
           {
            if(arr[i][j]>max)
            {
            max=arr[i][j];
            a=i;
            b=j;
           }
           
        }   
        }   
         printf("The max number is :%d\nThe index is %d,%d",max,a,b);
    return 0;
}
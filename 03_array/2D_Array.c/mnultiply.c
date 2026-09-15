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

    for(int i;i<m;i++)
       {
        for(int j=0;j<n;j++)
           {
            printf("Enter the value %d,%d",i,j);
            scanf("%d",&arr[i][j]);
           }
       }
    //input of 2nd matrix
    int p,q;
    printf("Enter the number of row of 2nd matrix:");
    scanf("%d",&p);

     printf("Enter the number of coloumn of 2nd matrix:");
    scanf("%d",&q);

    int brr[p][q];

    for(int i=0;i<p;i++)
       {
        for(int j=0;j<q;j++)
           {
            printf("Enter the value %d,%d",i,j);
            scanf("%d",&brr[i][j]);
           }
       }

       //Multiply

       int crr[m][q];
    
    for(int i=0;i<m;i++)
       {
        for(int j=0;j<q;j++)
           {
            crr[i][j]=0;
            for(int k=0;k<n;k++)
               {
                crr[i][j]+=arr[i][k]*brr[k][j];
               }
           }
       } 
    
    //print the result
    
    for(int i=0;i<m;i++)
       {
        for(int j=0;j<q;j++)
           {
            printf("%d ",crr[i][j]);
           }
           printf("\n");
       }


    return 0;
}
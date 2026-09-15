#include <stdio.h>

int main()
{
    int n,i,j;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    int a=1;
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j=j+1)
        {
          if(a%2!=0)
          {  
            
            printf("%d ",a);
            

           
          }  
           a=a+2;
        }

         printf("\n");

    }
    return 0;
}
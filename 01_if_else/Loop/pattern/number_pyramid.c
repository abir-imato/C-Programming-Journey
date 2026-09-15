#include <stdio.h>

int main()
{
   int n,i,j,k, nsp;
   char ch;

   printf("Enter the value of lines:");
   scanf("%d",&n);

   nsp=n-1;

   for(i=1;i<=n;i++)
      {
         for(j=1;j<=nsp;j++)
            {
               printf(" ");
            }
            nsp--;

         for(k=1;k<=2*i-1;k++)
            {
             ch=(char)(64+k);  
             printf("%c",ch);
            }  
            printf("\n"); 
      }

    return 0;
}
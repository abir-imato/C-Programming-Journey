#include <stdio.h>

int main()
{
   int i,n;

   printf("Enter n : ");
   scanf("%d",&n);

   
   for(i=n;i<=(n*10);i=i+n){
   printf("\n %d",i);

   }
   return 0;
}
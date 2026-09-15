#include <stdio.h>
int main()
{
   int n,i,j;
   
   printf("Enter the value of n : ");
   scanf("%d",&n);

   for(i=1;i<=n;i++){

        int d =65;


    for(j=1;j<=n;j++){


        char ch=(char)d;

    printf("%c", ch);


        d++;
    }
    printf("\n");
   }
    return 0;

}
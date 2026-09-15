#include <stdio.h>

int main()
{
    int i, n,a,b,sum ;

    printf("Enter n : ");
    scanf("%d",&n);

    a=1;
    b=1;

    printf("1st fibonacci is : %d",a);
printf( "\n2nd fibonacci is : %d",b);

    for(i=1;i<=n-2;i++){

        sum=a+b;
         a=b;
         b=sum;

         printf("\n%dth fibonacci is : %d",(i+2),sum);

    }



   

    return 0;
} 
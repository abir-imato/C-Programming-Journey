#include <stdio.h>

int main()
{
    int i,n;
    float a;

    printf("Enter n");
    scanf("%d",&n);

    a=100;

    for (i=1;i<=n;i=i+1){
    printf("%f ",a);
        
        a=a/2;


    }

    }
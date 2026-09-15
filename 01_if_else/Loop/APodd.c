#include <stdio.h>

int main()
{
    int i,n;

    printf("Enter n");
    scanf("%d",&n);

    for(i=4;i<=3*n+1;i=i+3)
    if(i==3*n+1){
    printf("%d",i);
    }
    return 0;
}
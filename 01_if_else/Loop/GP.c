#include <stdio.h>

int main()
{
    int i,g,n;

    printf("Enter n");
    scanf("%d",&n);
    
    g=3;

    for(i=1;i<=n;i++){
        printf("%d ",g);
        g=g*4;
    }
    return 0;
}
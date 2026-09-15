#include <stdio.h>

int main()
{
    int n,i,p;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        p=n-i;
        n=n*p;
    }
    printF("The factorial is : %d",n);
    
    return 0;
} 
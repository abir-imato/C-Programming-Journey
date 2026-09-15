#include <stdio.h>

int main()
{
    int n,ld,new=0;

    printf("Enter n: ");
    scanf("%d",&n);

    while(n!=0){
        ld=n%10;
        new=(new*10)+ld;
        n=n/10;
    }
    printf("%d",new);
    return 0;
}
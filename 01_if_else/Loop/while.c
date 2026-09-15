#include <stdio.h>
int main()
{
    int n ,count=0;

    printf("Enter the vale of n: ");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
printf("%d",count);
}
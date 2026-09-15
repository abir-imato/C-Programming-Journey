#include <stdio.h>
void increasing(int n)
{
 if(n==0)return;
 increasing(n-1);
 printf("%d\n",n);
 return;
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    increasing(n);
    return 0;
}
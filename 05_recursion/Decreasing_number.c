#include <stdio.h>
void decreasing(int n)
{
    if(n==0)return;
    printf("%d\n",n);
    decreasing(n-1);//Recursive call
    return;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
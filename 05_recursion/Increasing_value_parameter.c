#include <stdio.h>
void increase(int x,int y)
{
    if(x>y)return;
    printf("%d\n",x);
    increase(x+1,y);//Recursive call
    return ;
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    increase(1,n);//Here is 2 parameter to start with 1
    return 0;
}
#include <stdio.h>
int power(int a,int b)
{
    if(b%2==0)
    {
    if (b==1)return a;
    int x=power(a,b/2);
    int y=x*x;
    return y;
    }
    else
    {
     if (b==1)return a;
    int x=power(a,b/2);
    int y=x*x*a;
    return y;
    }
}
int main()
{
    int a;
    printf("Enter the base number:");
    scanf("%d",&a);

    int b;
    printf("Enter the power number:");
    scanf("%d",&b);

    int x =power(a,b);
    printf("%d",x);

}
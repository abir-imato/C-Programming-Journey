#include <stdio.h>
int power(int a,int b)
{
    if(b==0)return 1;
    int recAns=a*power(a,b-1);
    return recAns;
}
int main()
{
    int a;
    printf("Enter the base number :");
    scanf("%d",&a);
     int b;
    printf("Enter the power number :");
    scanf("%d",&b);

    int result =power(a,b);
    printf("%d",result);
    return 0;
}
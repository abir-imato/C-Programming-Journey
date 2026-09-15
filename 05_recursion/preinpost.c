#include <stdio.h>
void preinpost(int n)
{
 if(n==0)return ;
 printf("pre %d\n",n);
 preinpost(n-1);
 printf("In %d\n",n);
 preinpost(n-1);
 printf("post %d\n",n);
 return;
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    preinpost(n);

    return 0;
}
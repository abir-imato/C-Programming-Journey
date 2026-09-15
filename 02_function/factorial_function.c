#include <stdio.h>
int pro(int a)
{
   int fact=1;
   for(int i=1;i<=a;i++)
      {
        fact=fact*i;
      }
      return fact;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(int i =1;i<=n;i++)
       {
        int fact =pro(i);
        printf("%d\n",fact);
       }
    return 0;
}
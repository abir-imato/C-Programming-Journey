#include <stdio.h>
int sum(int n)
{
    if( n==1)return 1;
    int total =n+sum(n-1);
    return total;
}
int main()
{
 int n;
 printf("Enter the value of n :");   
 scanf("%d",&n);
 
 int total=sum(n);
 printf("%d",total);
    return 0;
}
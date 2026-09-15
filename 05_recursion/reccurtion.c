#include <stdio.h>
int factorial(int n)
{
    if (n==1 || n==0) return 1; //base function
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int fact=factorial(n);

    printf("%d",fact);

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[5];
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    printf("The sum of array :%d",sum);
    return 0;
}
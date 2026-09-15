#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,5,6,7,8,9,10};
    int sum=0;
    int sum2=10*(10+1)/2;
    for(int i=0;i<=9;i++)
       {
        sum=sum+arr[i];
       }
    int miss=sum-sum2;
    miss=miss*-1;
    printf("%d is the missing number",miss);   
    return 0;
}
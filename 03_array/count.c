#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int count=0;
    for(int i =0;i<=6;i++)
    {
        if(arr[i]>2)count++;
    }
    printf("Count is :%d",count);
    return 0;
}
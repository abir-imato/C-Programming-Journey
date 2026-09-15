#include <stdio.h>
int main()
{
    int arr[5]={2,3,6,4,1};
        int max=arr[0];
        int max2=arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
        max2=arr[i];
    }
    printf("%d",max2);
    return 0;
}
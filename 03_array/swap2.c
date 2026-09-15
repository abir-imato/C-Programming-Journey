#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};//1 4 3 2 5
    for(int i=1,j=3;i<j;i++,j--)
       {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
       for(int i=0;i<=4;i++)
          {
            printf("%d ",arr[i]);
          }
    return 0;
}
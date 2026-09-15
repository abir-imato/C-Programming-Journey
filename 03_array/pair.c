#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count=0;
    for(int i =0;i<=9;i++)
       {
        for(int j=i+1;j<=9;j++)
           {
            if(arr[i]+arr[j]==12)
              {
                printf("(%d,%d)\n",arr[i],arr[j]);
               count++;
              }
           }
       }
       printf("%d",count);
    return 0;
}
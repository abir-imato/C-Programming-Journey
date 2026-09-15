#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7]={4,2,3,4,4,6,7};
    int x=4;
    int idx=0;
    bool flag=false;//false means not present
    for(int i=0;i<=6;i++)
    {
        if(arr[i]==x)
        flag=true;//true means number is not present
        idx=i;
        break;
    }
    if(flag==false)
      {
        printf("%d is not present here",x);
      }
    else
      {
        printf("%d is present here and the index is %d",x,idx);

      }  
   
    return 0;
}
#include <stdio.h>

int main()
{
    
    int arr[6]={1,2,3,4,5,6};
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<=5;i++)
    {
        if(i%2==0)
          {
           sum_even=sum_even+arr[i];
          }
        else{
           sum_odd=sum_odd+arr[i];
        }  
    
    }
     printf("the sum of even:%d\n",sum_even);
    printf("the sum of odd:%d",sum_odd);    

    return 0;
}
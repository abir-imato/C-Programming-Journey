#include <stdio.h>

int main()
{
   int n;
   printf("Enter the value of n :");
   scanf("%d",&n);
   int m=n;

    int sum=0;

    for(int i=1;i<=n;i++)
       {
         if(i%2==0)
           {
            sum++;
           }
       }
    
    int arr[sum];
    int k=2;
    for(int i=0;i<=sum-1;i++)
       {
         arr[i]=k;
         k=k+2;
       }
    for(int i=0;i<=(sum-1);i++)

       {
        for(int j=i;j<=(sum-1);j++)
           {
            if(arr[i]+arr[j]==n)
              {
                printf("Can be divided with %d and %d \n",arr[i],arr[j]);
              }
           }
       }
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[5];

    for(int i=0;i<=4;i++){
        int n=1;
        printf("Enter %dth value:",n);
        scanf("%d",&arr[i]);
        n++;
    }
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);

    }
    return 0;
}
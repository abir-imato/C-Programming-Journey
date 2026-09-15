#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    int product=1;
    int a=1;
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the element of number %d:",a);
        scanf("%d",&arr[i]);
        product=product*arr[i];
        a++;
    }
    printf("%d",product);
    // int product=1;
    // for(int i=1;i<=n;i++)
    // {
    //  product=product*arr[i];
    // }
    // printf("%d",product);
    return 0;
}
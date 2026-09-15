#include <stdio.h>

int main()
{
    int sum = 0, last_digit ,n;

    printf("Enter n: ");
    scanf("%d",&n);
    
    while (n!=0){
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;

    }
    printf("Sum of the digits :%d",sum);
    
    return 0;
}    
#include <stdio.h>

int main()
{
    int i ,n,a;

    printf("Enter n : ");
    scanf("%d",&n);

    a=0;

    for(i=2;i<n;i++){
        if(n%i==0){
        a=1;
        break;
        }
    }
    if(n==1){
        printf("It's not composite and prime number");
    }

    else if (a==1){
        printf("%d is a composite number",n);
    }

    else{
        printf("%d is a prime number",n);
    }
    return 0;
}
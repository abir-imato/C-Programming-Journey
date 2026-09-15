#include <stdio.h>

int main()
{
    int n ,i,a;
       a=0;
    printf("Enter n");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
            a=1;
        break;
        }
    }

    if(n==1){
        printf("Nothing is gonna be changed");
    }
    else if(a==1){
        printf("composite");
    }
    else{
        printf("prime");

    }
    return 0;
}
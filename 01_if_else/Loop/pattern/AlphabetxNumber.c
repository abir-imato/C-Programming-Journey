#include <stdio.h>
int main()
{
    int n,i,j;
    char ch;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

    if(i%2!=0){    
        for(j=1;j<=i;j++){

        
    printf("%d ",j);

        }

        printf("\n");
    }


    else{

        for(j=1;j<=i;j++){

        ch=(char)(j+64);

    printf("%c ",ch);

      }

        printf("\n");

    }
    
}
    return 0;

}
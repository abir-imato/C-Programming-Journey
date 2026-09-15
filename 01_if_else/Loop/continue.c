#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
    continue;
        }
        printf("\n %d",i);
    }

return 0;

}
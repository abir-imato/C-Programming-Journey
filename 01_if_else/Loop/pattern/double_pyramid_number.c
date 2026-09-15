#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of lines : ");
    scanf("%d",&n);

    int nst =n-1;
    int nsp = 1;

    for(int a=1;a<=n;a++)
       {
        printf("%d",a);
       }
    for(int b=n-1;b>=1;b--)
       {
        printf("%d",b);
       } 
    printf("\n");     

    for(int i =1;i<=n;i++)
       {
        for(int j=1;j<=nst;j++)
           {
            printf("%d",j);
           }
        for(int k=1;k<=nsp;k++)
           {
            printf(" ");
           }
        for(int j=nst;j>=1;j--)
           {
            printf("%d",j); 
           }   
           nst--;
       nsp +=2;
       printf("\n");   
       }
       
    return 0;
}
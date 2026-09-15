#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of lines :");
    scanf("%d",&n);

    int nst = n;
    int nsp=1;

    for(int m=1;m<=2*n+1;m++)
       {
        printf("%d",m);
       }printf("\n");
    for(int i=1;i<=n;i++)
       {
        int a=1;
        for(int j=1;j<=nst;j++)
           {
            printf("%d",a);
            a++;
           }
        for(int k=1;k<=nsp;k++)
           {
            printf(" ");
            a++;
           } 
         for(int l=1;l<=nst;l++)
           {
            printf("%d",a);
            a++;
           
           }
            nst--;
            nsp+=2;
           printf("\n");     
           
       }

    return 0;
}
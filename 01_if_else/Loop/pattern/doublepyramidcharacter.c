#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of lines :");
    scanf("%d",&n);

    int nst = n;
    int nsp=1;
    char ch;

    for(int m=1;m<=2*n+1;m++)
       {
        ch=(char)(64+m);
        printf("%c",ch);
       }printf("\n");
    for(int i=1;i<=n;i++)
       {
        int a=1;
        for(int j=1;j<=nst;j++)
           {
            ch=(char)(64+a);
            printf("%c",ch);
            a++;
           }
        for(int k=1;k<=nsp;k++)
           {
            printf(" ");
            a++;
           } 
         for(int l=1;l<=nst;l++)
           {
            ch=(char)(64+a);
            printf("%c",ch);
            a++;
           
           }
            nst--;
            nsp+=2;
           printf("\n");     
           
       }

    return 0;
}
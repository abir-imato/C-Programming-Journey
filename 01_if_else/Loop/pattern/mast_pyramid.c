#include <stdio.h>

int main()
{
    int i,j,k,n,l;
    char ch;

    printf("Enter the value of lines :");
    scanf("%d",&n);

    int nsp =n-1;

    for(i=1;i<=n;i++)
       {
        for(j=1;j<=nsp;j++)
           {
            printf(" ");
           }nsp--;
        for(k=1;k<=i;k++)
           {
            ch=(char)(k+64);
            printf("%c",ch);
           }   
        for(l=i-1;l>=1;l--)
           {
            ch=(char)(l+64);
            printf("%c",ch);
           }   
        printf("\n");
       }
    return 0;
}
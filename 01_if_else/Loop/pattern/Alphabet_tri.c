#include <stdio.h>

int main()
{
    int n,i,j,k;
    char ch;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
       {
        ch='A';
        for(j=1;j<=n-i;j++){
        printf(" ");}
        for(k=1;k<=i;k++)
        {
        printf("%c",ch);
        ch++;
        }
        printf("\n");
       }
    return 0;
}
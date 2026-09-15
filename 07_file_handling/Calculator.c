#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    char n;
    scanf("%c",&n);

     int b;
    scanf("%d",&b);
    

    switch(n){

    case '+':
    printf("%d",a+b);
    break;

     case '-':
    printf("%d",a-b);
    break;

     case '*':
    printf("%d",a*b);
    break;

     case '/':
    printf("%f",(float)a/b);
    break;

    default:
    printf("Wrong operation");

    }
}
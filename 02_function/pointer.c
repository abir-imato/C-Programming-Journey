#include <stdio.h>

int main()
{
    int a = 5;
    int* x=&a;
    *x=25;

    printf("%d\n",*x);
    printf("%p\n",&x);
    printf("%p\n",x);



    return 0;
}
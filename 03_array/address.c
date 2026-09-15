#include <stdio.h>

int main()
{
    int add[5]={1,2,3,4,5};
    printf("%p\n",&add[0]);
    printf("%p\n",&add[1]);
    printf("%p\n",&add[2]);
    printf("%p\n",&add[3]);
    printf("%p\n",&add[4]);

    return 0;
}
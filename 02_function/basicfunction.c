#include <stdio.h>

void England()
{
    printf("I am in England\n");
    return;
}

void USA()
{
    printf("I am in USA\n");
    England();
    return;

}

void Bangladesh()
{
    printf("I am in Bangladesh\n");
    USA();
    return;

}


int main()
{
    Bangladesh();
    return 0;
}
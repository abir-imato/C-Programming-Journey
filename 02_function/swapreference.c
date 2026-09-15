#include <stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x = *y;
    *y=temp;
}
int main()
{
    int a=5;
    int b=2;
    swap(&a,&b);
    printf("The new value of a :%d\n",a);
    printf("The new value of b :%d",b);

    return 0;
}
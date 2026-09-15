#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}


int main() {
    int num1 = 20, num2 = 10;
    printf("--------------\n");
    printf("|%d + %d = %d|\n", num1, num2, add(num1, num2));
    printf("|%d - %d = %d|\n", num1, num2, sub(num1, num2));
    printf("--------------\n");

    return 0;
}



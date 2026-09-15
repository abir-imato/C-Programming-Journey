#include <stdio.h>
#include<string.h>

int main()
{
    char str[40];
    gets (str);
    printf("%s",str)
    // printf("The result is:%s",str);

    //Here is a problem that is you can't print more than 1 word of a sentence after < > it will not work

    puts(str);
    return 0;
}
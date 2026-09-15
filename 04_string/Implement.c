#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Physics wallah";
    char*s2=s1;
    s2[0]='M';
    printf("%s",s2);
    return 0;
}
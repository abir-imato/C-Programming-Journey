#include <stdio.h>
#include <string.h>
int main()
{
   char str[]="Education";
   int count=0;
   int i=1;
   while(str[i]!='\0')
    {
        i++;
        count++;
    }
    printf("%c%d%c",str[0],count-1,str[count]);
    return 0; 
}
#include <stdio.h>

int main()
{
int i;
char ch;

for(i=65;i<=90;i++){

    ch=(char)i;

    printf("%c -> ",ch);
    printf("%d\n",i);


}
return 0;
}
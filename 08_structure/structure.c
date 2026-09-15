#include <stdio.h>
#include<string.h>

int main()
{
    struct book{
     char name[500];
     int page;
     int price;
    }a,b,c;

    strcpy(a.name,"Dark Psychology");//Use this to copy something to thre desired string
    a.page=100;
    a.price=120;

    printf("%s\n",a.name);
    printf("%d\n",a.page);
    printf("%d\n",a.price);

    strcpy(b.name,"Dopamin Detox");
    b.page=200;
    b.price=500;

    printf("%s\n",b.name);
    printf("%d\n",b.page);
    printf("%d\n",b.price);

    return 0;
}
#include <stdio.h>
#include<string.h>
int main()
{
    struct Student {
        char name [500];
        int roll;
        float cgpa;
    }a,b,c;

    strcpy(a.name,"Abir");
    a.roll=250102009;
    a.cgpa=4;

    printf("%s\n",a.name);
    printf("%d\n",a.roll);
    printf("%f\n",a.cgpa);

    printf("\n");

     strcpy(b.name,"Prithiwraj");
    b.roll=250102010;
    b.cgpa=4.5;

    printf("%s\n",b.name);
    printf("%d\n",b.roll);
    printf("%f\n",b.cgpa);

    printf("\n");


     strcpy(c.name,"Ratul");
    c.roll=260102009;
    c.cgpa=2.45;

    printf("%s\n",c.name);
    printf("%d\n",c.roll);
    printf("%f\n",c.cgpa);


    return 0;


}
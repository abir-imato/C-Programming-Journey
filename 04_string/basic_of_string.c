#include <stdio.h>

int main()
{
    //ASCII
    char n='A';
    printf("%c",n);
    int x=(int)n;//Type casting
    printf("->%d",x);
    printf("\n");

    //Taking input for string

    char arr [4]={'A','B','I','R'};

    for(int i=0;i<4;i++)
       {
        printf("%c",arr[i]);
       }
    printf("\n");

   // null character 

    char arr[]="Abir";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);

        i++; 
    } 
    printf("\n%d",(i));



    return 0;
}
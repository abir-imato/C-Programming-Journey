#include <stdio.h>

int main()
{
    int marks[10]={100,54,76,43,98,67,23,45,1,8};
    for(int i=0;i<=9;i++)
    {
        if(marks[i]<35)
        printf("%d ",i+1);
    }
    return 0;
}
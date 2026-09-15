#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of lines : ");
    scanf("%d",&n);

    int min;

    for(int i=1;i<=n;i++)
       {
        for(int j=1;j<=n;j++)
           {
            if(i<j)
              {
                min = i;
              }
            else
                {
                  min = j;
                }  
            printf("%d",min);
           }
           printf("\n");
       }
    return 0;
}
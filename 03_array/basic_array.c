#include <stdio.h>

int main()
{
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[3]);

// char arr2[5]={'a','b','c','d','e'};
// printf("%c",arr2[3]);

// int arr3[3];
// arr3[0]=1;
// arr3[1]=12;
// arr3[2]=123;

int arr[4];

printf("Enter the 1st number :");
scanf("%d",& arr[0]);

printf("Enter the 2nd number :");
scanf("%d",& arr[1]);

printf("Enter the 3rd number :");
scanf("%d",& arr[2]);

printf("Enter the 4th number :");
scanf("%d",& arr[3]);

printf("%d\n",arr[0]);
printf("%d\n",arr[1]);
printf("%d\n",arr[2]);
printf("%d\n",arr[3]);

return 0;

}
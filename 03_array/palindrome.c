#include <stdio.h>
void palindrome(int arr[])
{
 int i=0;
 int j=4;
 while(i<j)
 {
  if(arr[i]==arr[j])
  {
    printf("palindrome ");

  }
  else{
    printf("Not palindrome");
    break;

  }
  i++;
  j--;
 }
}
int main()
{
    int arr[5]={1,3,3,2,1};
    palindrome(arr);
    return 0;
}
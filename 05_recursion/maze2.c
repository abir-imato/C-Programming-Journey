#include <stdio.h>
int maze2(int n,int m)
{
    int right =0;
    int down =0;
    
 if(n==1 && m==1) return 1;
 if(n==1){
    right+=maze2(n,m-1);
 }
 if(m==1){
    down+=maze2(n-1,m);
 }
 if(n>1 && m>1){
    right+=maze2(n,m-1);
    down+=maze2(n-1,m);
 }

 int ways=right + down;
 return ways;
}
int main()
{
    int n ;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    int m ;
    printf("Enter the number of coloumns:");
    scanf("%d",&m);

    int ways =maze2(n,m);
    printf("%d",ways);

    return 0;
}
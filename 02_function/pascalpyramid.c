#include <stdio.h>
int factorial(int a,int b,int c)
{
    int processing =a/(b*c);
    return processing;
}    
int combination(int x)
{
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial = factorial * i;
       
    }
        return factorial;

}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    
    
    for(int i=0;i<=n-1;i++)
       {
        for(int k=n;k>=i;k--)
           {
            printf(" ");
           }
        for(int j=0;j<=i;j++)
           {
            
    int factn=combination(i);
    int factr=combination(j);
    int factnr=combination(i-j);
    int ncr =factorial(factn,factr,factnr);

    printf("%d ",ncr);

           }
           printf("\n");
       }
    


    return 0;
}
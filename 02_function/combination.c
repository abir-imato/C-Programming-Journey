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

    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);


    int factn=combination(n);
    int factr=combination(r);
    int factnr=combination(n-r);
    int ncr =factorial(factn,factr,factnr);

    printf("%d\n",factn);
    printf("%d\n",factr);
    printf("%d\n",factnr);
    printf("%d\n",ncr);

    


    return 0;
}
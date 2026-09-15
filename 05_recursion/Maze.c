#include <stdio.h>
int maze(int cc,int cr,int er,int ec)
{
    int rightWays =0;
    int downWays =0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
       rightWays+= maze(cc+1,cr,er,ec);
    }
    if(cc==ec){
       downWays += maze(cc,cr+1,er,ec);
    }
    if(cc<ec && cr<er)
    {
       rightWays+= maze(cc+1,cr,er,ec);
       downWays += maze(cc,cr+1,er,ec);
       
    }

    int ways = rightWays + downWays;
    return ways;

}
int main()
{
    int n,m;

    printf("Enter the number of rows :");
    scanf("%d",&n);

    printf("Enter the number of rows :");
    scanf("%d",&m);

    int ways=maze(1,1,n,m);
    printf("%d",ways);
    return 0;
}
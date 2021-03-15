#include<stdio.h>
int main()
{
    long long W,H,sum=0;
    scanf("%lld %lld",&W,&H);
    long long king[H][W];
    for(long long i=0;i<H;i++)
    {
        for(long long j=0;j<W;j++)
        {
            scanf("%lld",&king[i][j]);
        }
    }
    long long max=king[0][0];
    for(long long i=0;i<H;i++)
    {
        for(long long j=0;j<W;j++)
        {
            sum=sum+king[i][j];
        }
    }
    long long first=sum,save=sum;
    while (1)
    {
        if(first%(W*H)==0)
        {
            break;
        }
        else
        {
            sum=sum+1;
            first=sum;
        }
    }
    printf("%lld",first-save);
    
    return 0;
}
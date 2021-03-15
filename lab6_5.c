#include<stdio.h>
int main()
{
    long long W,H,count=0;
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
            printf("%lld ",king[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int num,same=0;
    scanf("%d",&num);
    int num1[num],num2[num];
    int start,end;
    scanf("%d %d",&start,&end);
    for(int i=num-1;i>=0;i--)
    {
        num1[i]=start%10;
        num2[i]=end%10;
        start=start/10;
        end=end/10;
    }
    for(int i=0;i<num;i++)
    {
        if(num1[i]==num2[i])
        {
            same++;
        }
    }
    printf("%d %d",same,num-same);
    return 0;
}
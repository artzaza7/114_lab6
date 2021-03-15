#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int number[num][2];
    int cheak[num];
    int wow[num];
    for(int i=0;i<num;i++)
    {
        cheak[i]=i+1;
        wow[i]=0;
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<num;k++)
            {
                if(number[i][j]==cheak[k])
                {
                    wow[k]++;
                }
            }
        }
    }
    int max=wow[0],min=wow[0];
    int savemax,savemin;
    for(int t=0;t<num;t++)
    {
        if(max<=wow[t])
        {
            max=wow[t];
            savemax=t;
        }
        if(min>=wow[t])
        {
            min=wow[t];
            savemin=t;
        }
    }
    printf("%d %d",savemax+1,savemin+1);
    return 0;
}
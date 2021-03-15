#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int number[num][2];
    int cheak[num];
    int wow[num];
    int save[2];
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
    int max=wow[0],min1,min2,getza;
    int savemax,count1=0,count2=0;
    for(int t=0;t<num;t++)
    {
        if(max<wow[t])
        {
            max=wow[t];
            savemax=t;
        }
        else if(max==wow[t])
        {
            continue;
        }
    }
    for(int i=0;i<2;i++)
    {
        save[i]=number[savemax][i];
    }
    int savetemp1,savetemp2;
    for(int i=0;i<num;i++)
    {
        if(cheak[i]==save[0])
        {
            if(count1==1)
            {
                break;
            }
            min1=wow[i];
            savetemp1=i;
            count1++;
        }
        if(cheak[i]==save[1])
        {
            if(count2==1)
            {
                break;
            }
            min2=wow[i];
            savetemp2=i;
            count2++;
        }
    }
    getza=cheak[savetemp2];
    if(min1<min2)
    {
        getza=cheak[savetemp1];
    }
    printf("%d %d",savemax+1,getza);
    return 0;
}
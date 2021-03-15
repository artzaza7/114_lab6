#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    char name[num][1000];
    for(int i=0;i<num;i++)
    {
        scanf("%s",name[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=num;j>=1;j--)
        {
            if(name[j][0]<name[j-1][0])
            {
                char cy[1000];
                strcpy(cy,name[j]);
                strcpy(name[j],name[j-1]);
                strcpy(name[j-1],cy);
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        printf("%s",name[i]);
        printf("\n");
    }
    return 0;
}
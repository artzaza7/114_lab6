#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    char cheack[num][1000];
    char cp[1000];
    for(int i=0;i<num;i++)
    {
        scanf("%s",cheack[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if((strcmp(cheack[i],cheack[j]))>0)
            {
                strcpy(cp,cheack[i]);
                strcpy(cheack[i],cheack[j]);
                strcpy(cheack[j],cp);
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        printf("%s\n",cheack[i]);
    }
    return 0;
}
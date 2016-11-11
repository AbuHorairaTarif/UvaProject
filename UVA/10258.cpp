#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX 150
using namespace std;
struct score_board
{
    int name,penalty,solved;
};
score_board List[MAX];
bool comp(score_board a,score_board b)
{
    if(a.solved==b.solved)
    {
        if(a.penalty==b.penalty)
        {
            return (a.name<b.name);
        }
        return (a.penalty<b.penalty);
    }
    return (a.solved>b.solved);
}
bool problems[MAX][15];
bool submitted[MAX];
bool accepted[MAX][15];
int main()
{
    int tst,Case=0,Name,prob,time,i,sum,j;
    char line[200],judge;
    score_board temp;
    scanf("%d",&tst);
    getchar();
    getchar();
    while(tst--)
    {
        memset(problems,0,sizeof(problems));
        memset(submitted,0,sizeof(submitted));
        memset(accepted,0,sizeof(accepted));
        for(i=0;i<MAX;i++)
        {
            List[i].name=0;
            List[i].penalty=0;
            List[i].solved=0;
        }
        while(gets(line))
        {
            if(!strcmp(line,""))
                break;
            sscanf(line,"%d %d %d %c",&Name,&prob,&time,&judge);
            List[Name].name=Name;
            submitted[Name]=true;
            if(judge=='I')
                ++problems[Name][prob];
            else if(judge=='C' && accepted[Name][prob]==false)
            {
                sum=time+problems[Name][prob]*20;
                ++List[Name].solved;
                List[Name].penalty+=sum;
                accepted[Name][prob]=true;
            }
        }
        sort(List,List+150,comp);
        if(Case++)
            printf("\n");
        for(i=0;i<MAX;++i)
        {
            if(submitted[List[i].name]==true)
                printf("%d %d %d\n",List[i].name,List[i].solved,List[i].penalty);
        }
    }
    return 0;
}

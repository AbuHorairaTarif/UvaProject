#include <cstdio>
#include <cstring>
using namespace std;
int n,p[30],a,b,t[30][30],tn[30];
char s1[10],s2[10];
void Return(int x)
{
    int m=p[x],i=0;
    while(t[m][i++]!=x);
    while(tn[m]>i)
    {
        int r=t[m][--tn[m]];
        p[r]=t[r][0]=r;
        tn[r]=1;
    }
}
void Move(int x,int y)
{
    int a=p[x],b=p[y],an=0;
    while(t[a][an]!=x)
        an++;
    for(int i=an;i<tn[a];i++)
        t[b][tn[b]++]=t[a][i],p[t[a][i]]=b;
    tn[a]=an;
}
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
        {
            p[i]=i;
            t[i][0]=i;
            tn[i]=1;
        }
        while(scanf("%s",s1),s1[0]!='q')
        {
            scanf("%d%s%d",&a,s2,&b);
            if(p[a]==p[b]) continue;
            if(s1[0]=='m') Return(a);
            if(s2[1]=='n') Return(b);
            Move(a,b);
        }
        for(int i=0;i<n;i++)
        {
            printf("%d:",i);
            for(int j=0;j<tn[i];j++)
                printf(" %d",t[i][j]);
            puts("");
        }
    }
    return 0;
}

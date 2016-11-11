#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int edge[300][300];
int color[300];
int n,m,ok;
void dfs(int cnt,int clr)
{
    for(int i=0;i<n;i++)
    {
        if(edge[cnt][i]==1 && color[i]==clr)
        {
            ok=1;
        }
    }
    color[cnt]=clr;
    for(int i=0;i<n;i++)
    {
        if(edge[cnt][i]==1 && color[i]==0)
        {
            dfs(i,3-clr);
        }
    }
}
int main()
{
    while(scanf("%d",&n),n)
    {
        scanf("%d",&m);
        memset(edge,0,sizeof(edge));
        for(int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            edge[a][b]=edge[b][a]=1;
        }
        memset(color,0,sizeof(color));
        ok=0;
        dfs(0,1);
        if(ok==0)
            puts("BICOLORABLE.");
        else
            puts("NOT BICOLORABLE.");
    }
    return 0;
}

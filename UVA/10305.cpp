#include<stdio.h>
#include<string.h>
#define N 110

int G[N][N];
int c[N],topo[N];
int t,n;
void dfs(int u)
{
    int i;
    if(c[u])
        return;
    c[u]=1;
    for(i=1; i<=n; i++)
        if(G[u][i])
        {
            dfs(i);
        }
    topo[--t]=u;
}

int main(void)
{
    int m,u,v,i;
    while(scanf("%d%d",&n,&m)&&(n!=0||m!=0))
    {
        memset(c,0,sizeof(c));
        memset(G,0,sizeof(c));
        t=n;
        for(i=1; i<=m; i++)
            scanf("%d%d",&u,&v),G[u][v]=1;
        for(i=1; i<=n; i++)
            if(!c[i])
                dfs(i);
        for(i=0; i<n; i++)
            printf("%d%c",topo[i],i==n-1?'\n':' ');
    }
    return 0;
}

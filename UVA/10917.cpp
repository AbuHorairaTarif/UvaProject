#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int maxn=1010;
const int inf=0x7fffffff;
int n,m;
int d[maxn],w[maxn][maxn];
bool vis[maxn];
int f[maxn];
struct HeapNode
{
    int d,u;
    bool operator < (const HeapNode& rhs) const{
        return d>rhs.d;
    }
};
void dijkstra()
{
    priority_queue<HeapNode> q;
    q.push((HeapNode){0,2});
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
        d[i]=inf;
    d[2]=0;
    while(!q.empty())
    {
        HeapNode x=q.top();
        q.pop();
        int u=x.u;
        if(vis[u]) continue;
        vis[u]=true;
        for(int i=1;i<=n;i++)
            if(w[u][i]&&d[i]>d[u]+w[u][i])
        {
            d[i]=d[u]+w[u][i];
            q.push((HeapNode){d[i],i});
        }
    }
}
int dp(int s)
{
    if(f[s]!=-1)
        return f[s];
    f[s]=0;
    for(int i=1;i<=n;i++)
        if(w[s][i]&&d[s]>d[i])
        f[s]+=dp(i);
    return f[s];
}
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        scanf("%d",&m);
        int a,b,c;
        memset(w,0,sizeof(w));
        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            w[a][b]=c;
            w[b][a]=c;
        }
        dijkstra();
        memset(f,-1,sizeof(f));
        f[2]=1;
        printf("%d\n",dp(1));
    }
    return 0;
}

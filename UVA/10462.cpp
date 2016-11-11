#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define mx 201
#define inf 9999999
using namespace std;
int find_rep(int r);
int par[mx],connect,cnt,A[mx],sum;
struct NODE
{
    int u,v,w;
};
NODE nod[mx];
bool cmp(NODE a,NODE b)
{
    return (a.w<b.w);
}
void make_set(int N)
{
    for(int i=1;i<=N;i++)
        par[i]=i;
}

void mst(int N)
{
    make_set(N);
    for(int i=0;i<connect;i++)
    {
        int u = find_rep(nod[i].u);
        int v = find_rep(nod[i].v);
        if(u!=v)
        {
            par[u]=v;
            A[cnt++]=i;
            sum+=nod[i].w;
        }
    }
    return;
}
int find_rep(int r)
{
    return (par[r]==r) ? r:par[r]=find_rep(par[r]);
}
int main()
{
    int N,i,H,ans,cas=0,b,disjoint,test;
    cin>>test;
    while(test--)
    {
        H=inf;
        sum=0;
        cnt=0;
        cin>>N>>connect;
        for(i=0;i<connect;i++)
        {
            cin>>nod[i].u>>nod[i].v>>nod[i].w;
        }
        sort(nod,nod+i,cmp);
        mst(N);
        if(cnt!=N-1)
            printf("Case #%d : No way\n",++cas);
        else
        {
            b=0;
            for(int k=0;k<cnt;k++)
            {
                ans=0;
                make_set(N);
                disjoint=0;
                for(int j=0;j<connect;j++)
                {
                    if(A[k]==j)
                        continue;
                    int u=find_rep(nod[j].u);
                    int v=find_rep(nod[j].v);
                    if(u!=v)
                    {
                        par[u]=v;
                        ans+=nod[j].w;
                        disjoint++;
                    }
                }
                if(disjoint == N-1)
                {
                    b=1;
                    if(ans<H)
                    {
                        H=ans;
                    }
                }
            }
            if(b==1)
                printf("Case #%d : %d\n",++cas,H);
            else
                printf("Case #%d : No second way\n",++cas);
        }
        memset(A,0,sizeof A);
    }
    return 0;
}

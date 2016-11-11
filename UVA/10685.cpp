#include <bits/stdc++.h>
#define mx 6000
using namespace std;
int par[mx],anm[mx];
map<string, int>rep;
void makeset(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        par[i]=i;
        anm[i]=1;
    }
}
int fnd(int a)
{
    if(par[a]==a)
        return a;
    else
        return (par[a]=fnd(par[a]));
}
void makegraph(int a,int b)
{
    int u,v;
    u=fnd(a);
    v=fnd(b);
    if(u!=v)
    {
        par[v]=u;
        anm[u]+=anm[v];
    }
}
int main()
{
    int node,edge,i,j,n1,n2;
    string st,a,b;
    while(scanf("%d %d",&node,&edge)==2)
    {
        if(node==0 && edge==0)
            break;
        makeset(node);
        for(i=1;i<=node;i++)
        {
            cin>>st;
            rep[st]=i;
        }
        for(j=1;j<=edge;j++)
        {
            cin>>a>>b;
            n1=rep[a];
            n2=rep[b];
            makegraph(n1,n2);
        }
        int res=0;
        for(i=1;i<=node;i++)
        {
            if(par[i]==i && anm[i]>res)
            {
                res=anm[i];
            }
        }
        printf("%d\n",res);
    }
    return 0;
}

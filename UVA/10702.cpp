#include <bits/stdc++.h>
using namespace std;
int mat[102][102],last[102],dp[102][1002];
int c,s,e,t;
int max(int a,int b)
{
    return a>b?a:b;
}

long long int call(int u,int d)
{
    if(d==0) return 0;
    if(dp[u][d]!=-1)
        return dp[u][d];
    long long int MX=-1*1e16;
    if(d==1)
    {
        for(int i=1;i<=e;i++)
            MX=max(MX,mat[u][last[i]]);
        return dp[u][d]=MX;
    }
    for(int i=1;i<=c;i++)
    {
        long long int ret=mat[u][i]+call(i,d-1);
        MX=max(ret,MX);
    }
    return dp[u][d]=MX;
}
int main()
{
    while(scanf("%d %d %d %d",&c,&s,&e,&t)==4)
    {
        if(!c && !s && !e && !t) break;
        memset(dp,-1,sizeof(dp));
        int i,j;
        for(i=1;i<=c;i++)
        {
            for(j=1;j<=c;j++)
            {
            scanf("%d",&mat[i][j]);
            }

        }

    for(i=1;i<=e;i++)
    {
        scanf("%d",&last[i]);
    }
    printf("%d\n",call(s,t));
}
}

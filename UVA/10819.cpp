#include <bits/stdc++.h>
using namespace std;
long long int dp[101][10201];
long long int amount,total,t[101],a[101];
long long int f(long long int i,long long int h);
int main()
{
    int i;
    while(cin>>amount>>total)
    {
        memset(dp,-1,sizeof(dp));
        for(i=0;i<total;i++)
        {
            cin>>a[i]>>t[i];
        }
        cout<<f(0,0)<<"\n";
    }
}
long long int f(long long int i,long long int h)
{
    if(i>=total) return 0;
    if(dp[i][h] !=-1)
        return dp[i][h];
    int r1=0,r2=0;
    if(h+a[i]<= amount || (h+a[i]>2000 && h+a[i]<=amount+200))
    {
        r1=t[i]+f(i+1,h+a[i]);
    }
    r2=f(i+1,h);
    dp[i][h]=r1>r2?r1:r2;
    return dp[i][h];
}

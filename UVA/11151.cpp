#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=1100;
int dp[maxn][maxn];
char c[maxn];
int solve(int l,int r)
{
    if(dp[l][r]!=-1) return dp[l][r];
    if(l>r) return 0;
    if(l==r) return 1;
    if(c[l]==c[r]) dp[l][r]=2+solve(l+1,r-1);
    else dp[l][r]=max(solve(l+1,r),solve(l,r-1));
    return dp[l][r];
}
int main()
{
    int test;
    scanf("%d",&test);
    gets(c);
    while(test--)
    {
        memset(dp,-1,sizeof(dp));
        gets(c);
        int n=strlen(c);
        printf("%d\n",solve(0,n-1));
    }
    return 0;
}

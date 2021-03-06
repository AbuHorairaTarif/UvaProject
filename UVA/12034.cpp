#include <cstdio>
#include <cstring>
const int N=1005;
const long long int MOD = 10056;
long long int dp[N][N],f[N];
void init()
{
    memset(f,0,sizeof(f));
    memset(dp,0,sizeof(dp));
    dp[1][1]=1;
    for(long long int i=1;i<=1000;i++)
    {
        for(long long int j=1;j<=i;j++)
        {
            dp[i+1][j]=(dp[i+1][j]+dp[i][j]*j)%MOD;
            dp[i+1][j+1]=(dp[i+1][j+1]+dp[i][j]*(j+1))%MOD;
            f[i]=(f[i]+dp[i][j])%MOD;
        }
    }
}
int main()
{
    init();
    int cas,n;
    scanf("%d",&cas);
    for(int i=1;i<=cas;i++)
    {
        scanf("%d",&n);
        printf("Case %d: %lld\n",i,f[n]);
    }
    return 0;
}

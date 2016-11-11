#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int a[10010];
int dp[10010][110];
int main()
{
    int t,n,k;
    int i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            a[i]=abs(a[i])%k;
        }
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                if(dp[i][j])
                {
                    dp[i+1][(j+k+a[i]) % k]=1;
                    dp[i+1][(j+k-a[i]) % k]=1;
                }
            }
        }
        if(dp[n][0])
            printf("Divisible\n");
        else
            printf("Not divisible\n");
    }
    return 0;
}

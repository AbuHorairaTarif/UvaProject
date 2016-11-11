#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,p,i,j,k;
    scanf("%d",&t);
    while(t-- && scanf("%d %d",&n,&p))
    {
       long int dp[100000];
       memset(dp,0,sizeof(dp));
       dp[0]=1;
       for(i=0;i<p;i++)
       {
           scanf("%d",&k);
           for(j=10000;j>=0;j--)
            if(dp[j])
            dp[j+k]=1;
       }
       if(dp[n]) puts("YES");
       else puts("NO");
    }
    return 0;
}

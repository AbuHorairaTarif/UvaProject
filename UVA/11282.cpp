#include <bits/stdc++.h>
using namespace std;
long long int nck[30][30];
long long int derange[30];
int main()
{
    for(int n=0;n<=20;n++)
    {
        for(int k=0;k<=n;k++)
        {
            if(k==0)
            {
                nck[n][k]=1;
            }
            else
            {
                nck[n][k]=nck[n-1][k]+nck[n-1][k-1];
            }
        }
    }
    derange[0]=1,derange[1]=0,derange[2]=1;
    for(int i=3;i<=20;i++)
    {
        derange[i]=(long long int)(i-1)*(derange[i-1]+derange[i-2]);
    }
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        long long int ans=0LL;
        for(int i=0;i<=k;i++)
        {
            ans+=(nck[n][i]*derange[n-i]);
        }
        printf("%lld\n",ans);
    }
    return 0;
}

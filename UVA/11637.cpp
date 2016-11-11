#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;
double t[MAXN+10];
int n,k;
void pre()
{
    memset(t,0,sizeof(t));
    t[n-1]=1;
    for(int i=n-1;i > 2 * k; i--)
        t[i-1]=t[i]*(i- 2 * k)/i;
}
int main()
{
    int kase=0;
    while(scanf("%d%d",&n,&k))
    {
        if(!n && !k) break;
        pre();
        double ans=0;
        for(int i=1;i<=n;i++)
        {
            int x=max(i-k-1,0)+max(n-i-k,0);
            ans+=t[x];
        }
        printf("Case %d: %.4lf\n",++kase,n-ans);
    }
    return 0;
}

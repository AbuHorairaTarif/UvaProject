#include <stdio.h>
long long int ans[128];
int main()
{
    long long int i,n;
    ans[0]=1,ans[1]=1;

    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        for(i=2;i<81;++i)
        ans[i]=ans[i-1]+ans[i-2];
        printf("%lld\n",ans[n]);
    }
    return 0;
}

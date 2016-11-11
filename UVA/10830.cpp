#include <cstdio>
int main()
{
    for(int c=0,n;scanf("%d",&n)==1 && n;)
    {
        long long int ans=0;
        int i,y,z;
        for(i=2,y=n;i<=n/i;++i)
        {
            z=y;
            y=n/i;
            ans+=i*(y-1);
            ans+=(long long int)(i-2)*(y+1+z)*(z-y)/2;
        }
        if(i<=y) ans+=i*(n/i-1);
        printf("Case %d: %lld\n",++c,ans);
    }
    return 0;
}

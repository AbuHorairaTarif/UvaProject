#include <stdio.h>
int main()
{
    long long int mod=1e13 + 7;
    int T,c=1;
    scanf("%d",&T);
    while(T--)
    {
        int l,m,n;
        scanf("%d%d%d",&l,&m,&n);
        l*=l;
        long long int i,ans=0,sum=1;
        for(i=0;i<m-1;i++)
        {
            sum=(sum*(l-i))%mod;
        }
        for(;m<=n;m++)
        {
            sum=(sum*(l-m+1))%mod;
            ans=(ans+sum)%mod;
        }
        printf("Case %d: %lld\n",c++,ans);
    }
    return 0;
}

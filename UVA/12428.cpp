#include <stdio.h>
long long int n,m,f[120000],i,t;
int main()
{
    f[0]=0;
    for(i=1;i<120000;i++)
        f[i]=i*(i+1)/2-i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        for(i=1;i<n;i++)
        {
            if(f[i]+n-i>=m)
                break;
        }
        printf("%lld\n",n-i);
    }
    return 0;
}

#include <cstdio>
#include <cmath>
#include <algorithm>
#define MAX 1000005
using namespace std;
int fr[MAX],mul[MAX];
void gen()
{
    int i,j;
    for(i=2;i<MAX;i++)
        mul[i]=1;
    for(i=2;i<MAX;i++)
    {
        if(fr[i]==0)
        {
            for(j=i;j<MAX;j+=i)
            {
                fr[j]++;
                mul[j]*=i;
            }
        }
    }
}
int main()
{
    long long int n,m,i;
    int tcase;
    gen();
    scanf("%d",&tcase);
    while(tcase--)
    {
        scanf("%lld %lld",&n,&m);
        if(n>m) swap(n,m);
        long long int ans=n*m;
        for(i=2;i<=n;i++)
        {
            if(mul[i]==i)
            {
                long long int tmp=(m/i);
                long long int tmp1=(n/i);
                if(fr[i]&1)
                    ans-=(tmp*tmp1);
                else ans+=(tmp*tmp1);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}

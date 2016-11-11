#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool p[5100000];
int pri[1000000],t,d[10000],tt;
long long int n;
int main()
{
    for(int i=2;i<=5000000;++i)
        if(p[i]==false)
    {
        pri[++t]=i;
        for(int j=2;j<=5000000/i;++j)
            p[i*j]=true;
    }
    for(scanf("%lld",&n);n!=0;scanf("%lld",&n))
    {
        int kmax=1;
        long long int nn=n;
        memset(d,0,sizeof(d));
        tt=0;
        for(int i=1;i<=t;++i)
        {
            if(n%pri[i]==0)
            {
                tt++;
                while(n%pri[i]==0)
                {
                    d[tt]++;
                    n/=pri[i];
                }
                if(d[tt]>kmax) kmax=d[tt];
            }
        }
        if(n!=1) d[++t]=1;
        long long int ans=0,kans=1;
        for(int i=1;i<=kmax;++i)
        {
            kans=1;
            for(int j=1;j<=tt;++j)
                kans*=(d[j]/i+1);
            ans+=kans-1;
        }
        printf("%lld %lld\n",nn,ans);
    }
        return 0;
}

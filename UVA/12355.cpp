#include <bits/stdc++.h>
using namespace std;
const int N=10000000;
bool c[N+10];
int prime[N/5],cnt=0;
void init()
{
    for(int i=2;i<=N;i++)
        if(c[i]==0)
    {
        prime[++cnt]=i;
        for(int j=2;j*i<=N;j++)
            c[i*j]=1;
    }
}
int main()
{
    int o,i;
    long long int x;
    init();
    while(scanf("%lld",&x)==1)
    {
        if(x==0) break;
        long long int res=1;
        for(i=1;(long long int)prime[i]*prime[i]<=x;i++)
            if(x%prime[i]==0)
        {
            int y=0;
            while(x%prime[i]==0)
            {
                y++;
                x/=prime[i];
            }
            if(prime[i]!=2)
                res*=(2*y+1);
        }
        if(x!=1 && x!=2)
            res*=3;
        res*=2;
        cout<<res<<endl;
    }
    return 0;
}

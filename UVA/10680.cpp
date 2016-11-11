#include <bits/stdc++.h>
#define max 1000256
using namespace std;
bool sieve[max]={false};
vector<long long>primes;
long long int c[max]={0},a[max]={0},l,tmp,cur,ci,n;
int main()
{
    for(int i=4;i<max;i+=2)
        sieve[i]=true;
    sieve[0]=sieve[1]=true;
    for(long long int i=3;i*i<=max;i+=2)
    {
        if(!sieve[i])
        {
            for(long long int j=i*i;j<max;j+=2*i)
                sieve[j]=true;
        }
    }
    primes.push_back(2);
    for(int i=3;i<max;i+=2)
        if(!sieve[i])
        primes.push_back(i);
    l=primes.size();
    c[1]=1,a[1]=1;
    for(long long int i=2;i<max;i++)
    {
        a[i]=a[i-1],tmp=2,cur=i;
        for(long long int j=1;j<l && tmp*tmp<=cur;j++)
        {
            if(!(cur%tmp))
            {
                ci=0;
                while(!(cur%tmp)) ci++,cur/=tmp;
                while(c[tmp]<ci)
                    a[i]*=tmp,c[tmp]++;
                while(!(a[i]%10))
                    a[i]/=10;
                a[i]%=1000000000;
            }
            tmp=primes[j];
        }
        if(cur>1)
        {
            if(c[cur]<1)
                a[i]*=cur,c[cur]++;
        }
        while(!(a[i]%10))
            a[i]/=10;
        a[i]%=10000000;
    }
    while(scanf("%lld",&n),n)
        printf("%lld\n",a[n]%10);
    return 0;
}

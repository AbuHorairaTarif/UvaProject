#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

const long long int maxn=30000030;
long long int d[maxn];

void init()
{
    for(int c=1;c<=maxn/2;c++)
    {
        for(int a=c+c;a<maxn;a+=c)
        {
            int b=a-c;
            if((a^b)==c) d[a]++;
        }
    }
    for(int i=2;i<maxn;i++)
        d[i]+=d[i-1];
}

int main()
{
    init();
    int T_T,cas=1;
    scanf("%d",&T_T);
    while(T_T--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n",cas++,d[n]);
    }
    return 0;
}


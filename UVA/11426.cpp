#include <cstdio>
#include <iostream>
using namespace std;
const int MAXN=4000000;
int phi[MAXN+10];
long long int f[MAXN+10],G[MAXN+10];
void prepare()
{
    int i,j,k;
    phi[1]=1;
    for(i=2;i<=MAXN;i++)
        if(!phi[i])
        for(j=i;j<=MAXN;j+=i)
    {
        if(!phi[j])
            phi[j]=j;
        phi[j]=phi[j]/i*(i-1);
    }
    int d=2000;
    for(i=1;i<=MAXN;i++)
        f[i]=phi[i];
        for(i=2;i<=d;i++)
        {
            f[i*i]+=i*phi[i];
            for(j=i*i+i,k=i+1;j<=MAXN;j+=i,k++)
                f[j]+=i*phi[k]+k*phi[i];
        }
        for(i=2;i<=MAXN;i++)
            G[i]=G[i-1]+f[i];
    }
int main()
{
    prepare();
    int t;
    while(scanf("%d",&t)==1 && t)
    {
        printf("%lld\n",G[t]);
    }
    return 0;
}

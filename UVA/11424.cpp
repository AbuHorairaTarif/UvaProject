#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 200010
bool sieve[MAX+10];
int phi[MAX+10];
long long int gval[MAX+10];
void calc_phi()
{
    int i,j,p;
    for(i=1;i<MAX;++i)
        phi[i]=i;
    phi[2]=1;
    for(j=4;j<MAX;j+=2)
    {
        phi[j]-=phi[j]/2;
        sieve[j]=true;
    }
    for(i=3;i<MAX;i+=2)
    {
        if(!sieve[i])
        {
            phi[i]--;
            for(j=i+i;j<MAX;j+=i)
            {
                phi[j]-=phi[j]/i;
                sieve[j]=true;
            }
        }
    }
}
void calc_g()
{
    for(int i=1;i<MAX;i++)
        for(int j=i+i;j<MAX;j+=i)
        gval[j]+=i*phi[j/i];
    for(int i=2;i<MAX;i++)
        gval[i]+=gval[i-1];
}
int main()
{
    calc_phi();
    calc_g();
    int n;
    while(scanf("%d",&n)!=EOF && n)
        printf("%lld\n",gval[n]);
    return 0;
}

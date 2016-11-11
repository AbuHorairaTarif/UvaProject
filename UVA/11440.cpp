#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
const int p=100000007;
bool ok[10000000+17];
int m,n;
long long int phi[10000000+17];
void select_prime()
{
    int t=sqrt(10000000+17)+0.5;
    for(int i=2;i<=t;i++)
        if(!ok[i])
        for(int j=i*i;j<=10000017;j+=i)
        ok[j]=true;
}

void phi_table()
{
    phi[1]=phi[2]=1;
    for(int i=3;i<10000017;i++)
        if(ok[i])
        phi[i]=(phi[i-1]*i)%p;
    else
        phi[i]=(phi[i-1]*(i-1))%p;
}
int main()
{
    select_prime();
    phi_table();
    while(scanf("%d%d",&n,&m)==2 && n)
    {
        long long int ans=phi[m];
        for(int i=m+1;i<=n;i++)
        {
            ans*=i;
            ans%=p;
        }
        cout<<(ans-1+p)%p<<'\n';
    }
    return 0;
}

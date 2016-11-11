#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define MX 5000005
#define hi 2241
long prime[MX+5];
long factor[500],n_prime,table[MX+5];
void sieve()
{
    long i,j;
    n_prime=0;
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=0;
    for(i=4;i<=MX;i+=2)
        prime[i]=2;
    table[0]=table[1]=0;
    table[2]=1;
    for(i=3;i<=MX;i++)
    {
        table[i]=table[i-1];
        if(!prime[i])
        {
            table[i]++;
            for(j=i+i;j<=MX;j+=i)
                prime[j]+=i;
        }
        else if(!prime[prime[i]])
            table[i]++;
    }
}

int main()
{
    long a,b;
    sieve();
    while(scanf("%ld",&a)&&a)
    {
        scanf("%ld",&b);
        printf("%ld\n",table[b]-table[a-1]);
    }
    return 0;
}

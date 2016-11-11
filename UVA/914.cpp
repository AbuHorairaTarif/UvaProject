#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
#define SZ 1000010
#define not_prime 1
bool flag[SZ];
int num[SZ];
int dist[150];
void sieve();
int main()
{
    sieve();
    int tst,src,tar,i,j,x;
    bool first;
    scanf("%d",&tst);
    while(tst--)
    {
        memset(dist,0,sizeof(dist));
        first=0;
        scanf("%d %d",&src,&tar);
        for(i=src;i<=tar;++i)
        {
            if(!first)
            {
                if((i%2==1 && flag[i]==0) || i==2)
                {
                    first=1;
                    continue;
                }
            }
            else
            {
                if(num[i])
                {
                    x=num[i];
                    ++dist[x];
                }
            }
        }
        int Max=0,culprit;
        for(i=0;i<150;++i)
        {
            if(dist[i]>Max)
            {
                Max=dist[i];
                culprit=i;
            }
        }
        sort(dist,dist+150);
        if(dist[148]==dist[149])
            printf("No jumping champion\n");
        else
            printf("The jumping champion is %d\n",culprit);
    }
    return 0;
}
void sieve()
{
    int i,j,prime,sq,add;
    sq=sqrt(SZ);
    flag[0]=flag[1]=not_prime;
    prime=2;
    for(i=3;i<sq;i+=2)
    {
        if(!flag[i])
        {
            add=i*2;
            for(j=i*i;j<SZ;j+=add)
            {
                flag[j]=not_prime;
            }
             num[i]=i-prime;
             prime=i;
        }
    }
    for(j=i;j<SZ;j+=2)
    {
        if(!flag[j])
        {
            num[j]=j-prime;
            prime=j;
        }
    }
    return ;
}

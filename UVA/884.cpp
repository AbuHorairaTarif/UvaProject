#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#define MAX 1000001
using namespace std;
char is_prime[MAX];
int prime_series[1000010],limit;
int factors[1000010];
int fact(int now)
{
    int i,j,k,cnt;
    cnt=0;
    for(i=2;i*i<=now;i++)
    {
        if(now%i==0)
        {
            while(now%i==0 && now/i>0)
            {
                now/=i;
                cnt++;
            }
        }
    }
    if(now!=1)
        cnt++;
    return cnt;
}
int main()
{
    int num;
    int k,x,N,cnt;
    int i;
    factors[1]=0;
    for(i=2;i<MAX;i++)
    {
        factors[i]=fact(i)+factors[i-1];
    }
    while(scanf("%d",&num)!=EOF)
    {
        printf("%d\n",factors[num]);
    }
}
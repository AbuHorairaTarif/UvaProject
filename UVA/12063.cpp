#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
long long int Set(long long int N,int Pos)
{
    return N=(N|((long long int)1<<Pos));
}
long long int N,K;
long long int dp[66][110][110];
long long int solve(int index,int zero,int one,long long int mask)
{
    if(index==N)
    {
        mask=Set(mask,index-1);
        if(zero==one+1 && mask%K==0)
            return 1;
        else return 0;
    }
    int diff=one-zero+66;
    long long int mod=mask%K;
    long long int &ret=dp[index][diff][mod];
    if(ret!=-1)
    {
        return ret;
    }
    ret=0;
    return ret=ret+solve(index+1,zero+1,one,mask)+solve(index+1,zero,one+1,Set(mask,index-1));
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int cas=1;cas<=test;cas++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld%lld",&N,&K);
        if(K==0||N%2==1) printf("Case %d: %lld\n",cas,0);
        else printf("Case %d: %lld\n",cas,solve(1,0,0,0));
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

bool mark[10001000];
vector <long long> primeList;
vector <long long> primeFactors;
bool isNegative;
bool isPrime(long long p)
{
    if(p<2 || p%2==0) return false;
    int len = sqrt(p*1.0);
    for(int i=3;i<=len;i+=2)
    {
        if(p%i==0) return false;
    }
    return true;
}
void sieve()
{
    memset(mark,true,sizeof(mark));
    mark[0]=mark[1]=false;
    for(int i=4;i<10001000;i+=2) mark[i]=false;
    for(int i=3;i*i<=10001000;i+=2)
    {
        if(mark[i])
        {
            for(int j =i*i;j<10001000;j+=2*i)
                mark[j]=false;
        }
    }
    primeList.clear();
    primeList.push_back(2);

    for(int i=3;i<10001000;i+=2)
    {
        if(mark[i]) primeList.push_back(i);
    }
}

long long findPrimeFactors(long long n)
{
    int ind=0;
    long long tmp=n;
    primeFactors.clear();
    while(primeList[ind]*primeList[ind]<=n)
    {
        while(tmp%primeList[ind]==0)
        {
            tmp/=primeList[ind];
            primeFactors.push_back(primeList[ind]);
        }
        ind++;
    }
    if(tmp>1)
        primeFactors.push_back(tmp);
    sort(primeFactors.begin(),primeFactors.end());
    if(isNegative)return primeFactors[primeFactors.size()-1];

    if(primeFactors[0]==primeFactors[primeFactors.size()-1]) return -1;
    return primeFactors[primeFactors.size()-1];
}

int main()
{
    sieve();
    long long n;
    while(cin>>n && n)
    {
        if(n<0)
        {
            n*=-1;
            isNegative=true;
        }
        if(n<4 || (n<10001000 && mark[n]) || isPrime(n))
        {
           printf("-1\n");
           continue;
        }
            cout<<findPrimeFactors(n)<<endl;
            isNegative=false;
    }
    return 0;
}

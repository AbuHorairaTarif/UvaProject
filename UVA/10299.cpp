#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;
bool stats[32000+10];
vector<long>prime;
long N,n,primeSize,cnt;
map<long,long>factor;

void PrimeGenerate()
{
    long i,j,sqrtN;

    for(i=4;i<=32000;i+=2)
        stats[i]=true;

    sqrtN=sqrt(32000);

    for(i=3;i<=sqrtN;i+=2)
    {
        if(!stats[i])
            for(j=i*i;j<=32000;j+=i+i)
            stats[j]=true;
    }

    for(i=2;i<=32000;i++)
        if(!stats[i])
        prime.push_back(i);

    primeSize=prime.size();
}

void PrimeFactorize()
{
    long i;
    cnt=0;

    for(i=0;i<primeSize;i++)
    {
        if(n%prime[i]==0)
        {
            factor[cnt]=prime[i];
            cnt++;

            while(n%prime[i]==0)
                n/=prime[i];
        }
        if(n==1) break;
    }
}

long int CoPrime()
{
    long int i;
    for(i=0;i<cnt;i++)
    {
        N/=factor[i];
        N*=(factor[i]-1);
    }

    if(n!=1)
    {
        N/=n;
        N*=(n-1);
    }
    return N;
}

int main()
{
    long int result;
    PrimeGenerate();
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        N=n;
        factor.clear();
        PrimeFactorize();
        result=CoPrime();
        cout<<result<<endl;
            }
            return 0;
}

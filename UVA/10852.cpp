#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define MAX 10001
char isPrime[MAX];

void sieve()
{
    for(int i=2;i<MAX;i++)
        isPrime[i]=1;

    int k=2;
    for(int i=1;i<=sqrt((double)MAX);i++)
    {
        for(int j=k+k;j<MAX;j=j+k)
            isPrime[j]=0;
            for(k=k+1;!isPrime[k];k++);
        }
}

int main()
{
    sieve();
    int testCase;
    cin>>testCase;
    for(int i=1;i<=testCase;i++)
    {
        int N;
        cin>>N;
        for(int j=2;j<=N;j++)
        {
            if(isPrime[j])
            {
                if(2*j>N)
                {
                    cout<<j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

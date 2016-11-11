#include <iostream>
#include <cmath>
using namespace std;

#define max 1000000
int a[max];

void seive()
{
    long long int i,j,imax,jmax;
    for(i=0;i<=max;i++) a[i]=1;
    imax=sqrt(max)+1;
    for(i=2;i<=imax;i++)
    {
        jmax=(max/i)+1;
        if(a[i]==1)
        {
            for(j=2;j<=jmax;j++)
            {
                if(i*j<=max) a[i*j]=0;
            }
        }
    }
}

int main()

{
    seive();
    long long int i,N,temp,prime=0;
    while(cin>>N && N!=0)
    {
        temp =N;
        for(i=2;i<=N;i++)
            if(N%i==0 && a[i])
        {
            ++prime;
            N/=i;
        }
        cout<<temp<<" : "<<prime<<endl;
        prime=0;
    }
    return 0;
}

#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int divi[1000000];
long long int sumsi[1000000];
int main()
{

    int a,b,c,k,i,j,n,t;
    for(i=2;i<=100000;i++)
    {
        for(j=i;j<=100000;j+=i)
        {
            divi[j]++;
            sumsi[j]=sumsi[j]+i;
        }
    }
    long long int sig,sum;
    cin>>t;
    while(t--)
    {
    int sumd=0;
    long long int sumsig=0;

        cin>>a>>b>>k;
        for(i=a;i<=b;i++)
        {
            if(i%k==0)
            {
                sumd=sumd+divi[i]+1;
                sumsig=sumsig+sumsi[i]+1;
            }
        }
        cout<<sumd<<" "<<sumsig<<endl;
    }
    return 0;
}

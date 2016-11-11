#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int a[130];
char b[2002];
int is_prime(int n)
{
    int k=0;
    if(n==0 || n==1) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) k++;
    }
    if(k==0) return 1;
    return 0;
}
int main()
{
    int i,j,k,m,n,t,r=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b;
        memset(a,0,sizeof(a));
        for(j=0;j<strlen(b);j++)
        {
            a[b[j]]++;
        }
        cout<<"Case "<<i+1<<": ";
        for(k=0;k<129;k++)
        {
            if(is_prime(a[k]))
            {
                cout<<char(k);
                r=1;
            }
        }
        if(r==0)
            cout<<"empty";
        cout<<endl;
        r=0;
    }
    return 0;
}

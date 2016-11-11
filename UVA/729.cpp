#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int test,n,m,i;
    int a[1000];
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        for(i=0;i<n-m;i++)
            a[i]=0;
        for(i=n-m;i<n;i++)
            a[i]=1;
        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
        while(next_permutation(a,a+n))
        {
            for(i=0;i<n;i++)
                cout<<a[i];
            cout<<endl;
        }
        if(test)
            cout<<endl;
    }
    return 0;
}

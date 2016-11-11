#include<map>
#include <iostream>
#include <cstdio>

#define N 100

using namespace std;

int main()
{
    long long n,m,i,j,count,num,num1;
    map<long long,long long>mp;
    while(cin>>n>>m)
    {
        mp.clear();
        num1=0;
        if(n==0 && m==0) break;
        for(i=0;i<n;i++) {
            cin>>num;
            mp[num]=1;

        }
        for(i=0;i<m;i++) {
            cin>>num;
            if(mp[num]==1) num1++;
        }
        cout<<num1<<endl;

    }
    return 0;
}

#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int i,n,max,ans;
    while(cin>>n,n)
    {
        max=ans=0;
        map<string,int>mp;
        while(n--)
        {
            string s,a[5];
            for(i=0;i<5;++i)
                cin>>a[i];
            sort(a,a+5);
            for(i=0;i<5;++i)
                s+=a[i];
            mp[s]++;
            if(mp[s]==max) ans+=max;
            else if(mp[s]>max)
                max=ans=mp[s];
        }
        cout<<ans<<endl;
    }
    return 0;
}

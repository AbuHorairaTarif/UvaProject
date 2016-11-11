#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool A(pair<int,int> a,pair<int,int>b)
{
    if(a.first==b.first)
        return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    string c;
    bool f=false;
    while(getline(cin,c))
    {
        if(f)
            cout<<endl;
        f=true;
        int i,a[97]={0},l=0;
        pair<int,int>z[100];
        for(i=0;i<c.size();i++)
            a[c[i]-32]++;
        for(int i=0;i<97;i++)
            if(a[i])
        {
            z[l].first=a[i];
            z[l++].second=i;
        }
        sort(z,z+l,A);
        for(i=0;i<l;i++)
            cout<<z[i].second+32<<' '<<z[i].first<<endl;
    }
    return 0;
}

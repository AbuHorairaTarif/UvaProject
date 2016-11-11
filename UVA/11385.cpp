#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

const int maxn=46;
int cas;
int n;
int f[maxn];
int change[maxn];
int k;
string str, ans;
int miao;

int bs(int tmp)
{
    int l=1, r=maxn-1, mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(f[mid]>tmp) r=mid-1;
        else if(f[mid]<tmp) l=mid+1;
             else return mid;
    }
    if(f[l]==tmp) return l;
    if(f[r]==tmp) return r;

    return 0;

}
int main()
{
    f[1]=1;
    f[2]=2;
    for(int i=3;i<maxn;++i) f[i]=f[i-1]+f[i-2];

    cin>>cas;
    while(cas--)
    {
        cin>>n;
        miao=0;
        for(int i=1;i<=n;++i)
        {
            cin>>change[i];
            change[i]=bs(change[i]);
            miao=max(miao, change[i]);
        }
        getline(cin, str);
        getline(cin, str);

        ans="";
        for(int i=0;i<=miao;++i) ans=ans+" ";
        k=0;

        for(int i=0;i<str.size();++i)
            if(isupper(str[i]))
            {
                ++k;
                if(k>n) break;
                ans[change[k]]=str[i];
            }



        for(int i=1;i<ans.size();++i) cout<<ans[i];
        cout<<endl;
    }
       return 0;
}

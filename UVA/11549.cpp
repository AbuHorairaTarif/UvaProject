#include <set>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
set <int> myset;
int t,n,k;

int get(int n,int k)
{
    long long int ans = 1ll * k * k;
    long long int tmp=1;
    for(int i=1;i<=n;i++)
    {
        tmp*=10;
    }
    while(ans>=tmp)
    {
        ans/=10;
    }
    return (int)ans;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        myset.clear();
        scanf("%d%d",&n,&k);
        int ans=k;
        while(myset.find(k)== myset.end())
        {
            ans=max(ans,k);
            myset.insert(k);
            k=get(n,k);
        }
        printf("%d\n",ans);
    }
    return 0;
}

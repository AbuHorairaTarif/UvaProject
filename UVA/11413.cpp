#include <iostream>
using namespace std;
long long int a[1009];
long long int ans,n,m;
bool f(long long int capacity)
{
    long long int co=1;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        if(a[i]>capacity) return 0;
        if(sum+a[i]>capacity)
        {
            co++;
            sum=a[i];
        }
        else sum=sum+a[i];
    }
    if(co<=m) return 1;
    return 0;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    long long int i,j,k,d;
    while(cin>>n>>m)
    {
        long long int low=0,high=0,mid;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            high=high+a[i];
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(f(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

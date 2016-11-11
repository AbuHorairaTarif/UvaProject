#include <iostream>
using namespace std;
int main()
{
    int n,m,ncase;
    cin>>ncase;
    while(ncase--)
    {
        cin>>n>>m;
        int ans=0;
        while(m--)
        {
            int ret=1;
            int k,x;
            cin>>k;
            if(k==0)
                continue;
            while(k--)
            {
                cin>>x;
                ret*=x;
                ret%=n;
            }
            ans+=ret;
            ans%=n;
        }
        cout<<ans<<endl;
    }
    return 0;
}

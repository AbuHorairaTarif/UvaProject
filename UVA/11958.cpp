#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    long long int tst,n,ft,fm,st,sm,time,comp,xt,cases=0;
    cin>>tst;
    while(tst--)
    {
        long long int ans=INFINITY;
        scanf("%lld%lld:%lld",&n,&ft,&fm);
        long long st_time=ft*60+fm;
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld:%lld%lld",&st,&sm,&xt);
            time=st*60+sm;
            if(time<st_time)
            {
                time=time+24*60;
            }
            comp=time-st_time+xt;
            ans=min(ans,comp);
        }
        cout<<"Case "<<++cases<<": "<<ans<<endl;
    }
    return 0;
}

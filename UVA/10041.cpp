#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a[501],cas,t,ans,n;
    scanf("%d",&cas);
    for(int i=1;i<=cas;i++)
    {
        scanf("%d",&n);
        ans=0;
        for(int j=1;j<=n;j++)
            scanf("%d",&a[j]);
        sort(a+1,a+n+1);
        t=(n+1)/2;
        for(int j=1;j<=n;j++)
            ans+=abs(a[j]-a[t]);
        printf("%d\n",ans);
    }
    return 0;
}

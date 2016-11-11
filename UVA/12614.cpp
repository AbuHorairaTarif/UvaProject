#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int sum,x,y,n,t=1,tc,i,j,k,l,m;
    long long int a[200];
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        printf("Case %d: %lld\n",t++,a[n-1]);
    }
}

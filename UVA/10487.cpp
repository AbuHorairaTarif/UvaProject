#include <stdio.h>
#include <stdlib.h>
int a[1004];
int main()
{
    int n,m,ncase=0,i,j;
    int x,min,ans;
    while(scanf("%d",&n) &&n)
    {
        printf("Case %d:\n",++ncase);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&x);
            min=0x7fffffff;
            for(i=0;i<n;i++)
                for(j=i+1;j<n;j++)
                if(a[i]!=a[j] && abs(a[i]+a[j]-x)<min)
                min=abs((ans=(a[i]+a[j]))-x);
            printf("Closest sum to %d is %d.\n",x,ans);
        }
    }
    return 0;
}

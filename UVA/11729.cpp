#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct job{
    int b,j;
};

bool cmp(job x,job y)
{
    return x.j>y.j;
}
int main()
{
    job a[1010];
    int n,cnt=0,i,ans,sum;
    while(scanf("%d",&n)!=EOF && n)
    {
        ++cnt;
        ans=0;
        sum=0;
        for(i=0;i<n;i++)
            scanf("%d%d",&a[i].b,&a[i].j);
        sort(a,a+n,cmp);
        for(i=0;i<n;i++)
        {
            sum+=a[i].b;
            ans=max(ans,sum+a[i].j);
        }
        printf("Case %d: %d\n",cnt,ans);
    }
    return 0;
}

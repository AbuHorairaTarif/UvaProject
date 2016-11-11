#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    double ans,w,h;
    int n,p,i;
    while(scanf("%d",&n)!=EOF,n)
    {
        for(ans=0,i=1;i<=n;i++)
        {
            scanf("%lf%lf",&w,&h);
            if(w>h)
                swap(w,h);
            if(ans<w/2.0)
            {
                p=i;
                ans=w/2.0;
            }
            w=w<h/4?w:h/4;
            if(ans<w)
            {
                p=i;
                ans=w;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}

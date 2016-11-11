#include <bits/stdc++.h>
using namespace std;
int n;
double xx,yy,mx,my,x[1200],y[1200],l1,l2;
double cal(double a,double b,int t)
{
    return sqrt((x[t]-a)*(x[t]-a)+(y[t]-b)*(y[t]-b));
}

double check(int t)
{
    l1=cal(xx,yy,t);
    l2=cal(mx,my,t);
    return l2-l1*2;
}
int main()
{
    int i;
    while(~scanf("%d%lf%lf%lf%lf",&n,&xx,&yy,&mx,&my))
    {
        double m=1000000001;
        int ok=-1;
        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&x[i],&y[i]);
            double s=check(i);
            if(s>=0)
            {
                if(l1<m)
                {
                    ok=i;
                    m=l1;
                }
            }
        }
        if(ok>=0)
            printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",x[ok],y[ok]);
        else
            printf("The gopher cannot escape.\n");
    }
    return 0;
}

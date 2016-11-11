#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
const int maxn=105;
const int N=30;
const int mod=1000000007;
const double eps=1e-7;
const double PI=4*atan(1.0);
int dlcmp(double x)
{
    return x<-eps?-1:x>eps;
}

int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        double sum=0,R,T;
        while(n--)
        {
            double ti,x0,y0,xi,yi,prx,pry;
            scanf("%lf%lf%lf",&ti,&x0,&y0);
            prx=x0;
            pry=y0;
            double tmp=0;
            while(1)
            {
                scanf("%lf%lf",&xi,&yi);
                tmp+=xi*pry-yi*prx;
                if(!dlcmp(xi-x0)&& !dlcmp(yi-y0)) break;
                prx=xi;
                pry=yi;
            }
            sum+= fabs(tmp*ti);
        }
        scanf("%lf%lf",&R,&T);
        printf("%d\n",(int)(sum/(2*PI*R*R*T)));
    }
    return 0;
}

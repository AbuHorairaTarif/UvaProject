#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const double PI=acos(-1.0);
double L,n,C,L2;
int main()
{
    while(~scanf("%lf%lf%lf",&L,&n,&C))
    {
        if(L<0) break;
        L2=(1+n*C)*L;
        double left=0,right=PI/2,mid,r;
        for(int i=1;i<=40;i++)
        {
            mid=(left+right)/2;
            if(mid*L/sin(mid)>=L2)
            {
                right=mid;
            }
            else
            {
                left=mid;
            }
        }
        printf("%.3lf\n",L/2/sin(mid)*(1-cos(mid)));
    }
    return 0;
}

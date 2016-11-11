#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int test;
double n,m,a,b;
int main()
{
    scanf("%d",&test);
    for(int cas=1;cas<=test;cas++)
    {
        scanf("%lf%lf%lf%lf",&n,&m,&a,&b);
        double x=(m*(a+b)-n*a)/b;
        if(!(x<=10.0 && x>=0.0))
        {
            printf("Case #%d: Impossible\n",cas);
        }
        else
        {
            printf("Case #%d: %.2f\n",cas,x);
        }
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    long long int m,x;
    double mx;
    while(scanf("%lld%lld",&m,&x)==2 &&(m+x))
    {
        if(m==1 || x==0 || x==100)
            puts("Not found");
        else
        {
            mx=100.0*(double)(m-1)/(100.0-(double)x)-1.0;
            mx=ceil(mx);
            if(mx<m) puts("Not found");
            else
                printf("%.0lf\n",mx);
        }
    }
    return 0;
}

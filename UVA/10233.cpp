#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define eps 1e-9
using namespace std;
void cal(double &xx,double &yy,int a)
{
    int x,y;
    x=(int)(sqrt(a)+eps);
    y=a-x*x;
    if(y%2)
    {
        xx=x-y/2-2.0/3;
        yy=y/2+1.0/3;
    }
    else
    {
        xx=x-y/2;
        yy=y/2;
    }
    xx=xx+yy/2;
    yy=sqrt(3)/2.0*yy;
}
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        double x1,x2,y1,y2;
        cal(x1,y1,a);
        cal(x2,y2,b);
        double len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.3lf\n",len);
    }
    return 0;
}

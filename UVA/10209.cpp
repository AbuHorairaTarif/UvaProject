#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        double x,y,z;
        z=(1-sqrt(3.0)/4.0-pi/6.0)*a*a;
        y=(1-pi/4.0)*a*a-2*z;
        x=a*a-4.0*(y+z);
        printf("%.3lf %.3lf %.3lf\n",x,4*y,4*z);
    }
    return 0;
}

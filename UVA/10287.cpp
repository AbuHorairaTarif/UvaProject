#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        double k=sqrt(3.00);
        double r1,r2,r3,r4;
        r1=k*a/2;
        r2=a*k/(k+2);
        r3=k*a/4;
        r4=k*a*(sqrt(84.0)-7)/10;
        printf("%.10lf %.10lf %.10lf %.10lf\n",r1,r2,r3,r4);
    }
    return 0;
}

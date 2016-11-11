#include <stdio.h>
#include <math.h>
int main()
{
    double red,yellow,violate,s,a,b,c,at,total,ss;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        at=sqrt(s*(s-a)*(s-b)*(s-c));
        red=3.141592653589793*pow((at/s),2);
        violate=at-red;

        total=3.141592653589793*pow(((a*b*c)/(4*at)),2);
        yellow=total-(red+violate);

        printf("%.4lf %.4lf %.4lf\n",yellow,violate,red);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double a,b,l,d;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf%lf",&d,&l);
        a=l/2;
        b=sqrt((l/2*l/2)-(d/2*d/2));
        printf("%.3lf\n",pi*a*b);
    }
    return 0;
}

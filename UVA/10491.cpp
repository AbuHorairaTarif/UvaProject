#include <cstdio>
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
        printf("%.5lf\n",(a*b+b*b-b)/(a+b)/(a+b-c-1));
    return 0;
}

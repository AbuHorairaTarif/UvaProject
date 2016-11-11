#include <stdio.h>
#include <math.h>

#define Pi acos(-1)
int main()
{
    int test;
    double area,sqr,a,r,len,wide;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf",&len);
        r=len/5.0;
        wide = (6/10.0)*len;
        area=Pi*r*r;
        printf("%.2lf %.2lf\n",area,(wide*len)-area);
    }
    return 0;
}

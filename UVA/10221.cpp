#include <stdio.h>
#include <string.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double s,a,arc,chord,deg,rad;
    char type[5];
    while(scanf("%lf%lf%s",&s,&a,type)==3)
    {
        if(type[0]=='m'){
            if(a>180)
            a=360-a;
        deg=a/60.0;
        rad=(pi*deg)/180.0;
    }
    else if(type[0]=='d')
    {
        if(a>180)
            a=360-a;
        deg=a;
        rad=(pi*deg)/180.0;
    }
    arc=(s+6440)*rad;
    chord=2*(s+6440)*sin(rad/2.0);
    printf("%.6lf %.6lf\n",arc,chord);
}

return 0;
}

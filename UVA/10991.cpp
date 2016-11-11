#include <stdio.h>
#include <math.h>
int main()
{
    double r1,r2,r3,a,b,c,A,B,C,area,area1,area2,area3,s;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        A=acos((a*a+b*b-c*c)/(2.0*a*b));
        B=acos((b*b+c*c-a*a)/(2.0*b*c));
        C=acos((a*a+c*c-b*b)/(2.0*c*a));

        area1=A*r2*r2/2.0;
        area2=B*r3*r3/2.0;
        area3=C*r1*r1/2.0;
        area=area-area1-area2-area3;
        printf("%lf\n",area);

    }
    return 0;
}

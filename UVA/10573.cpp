#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    int t,c;
    double r1,r2,l,A;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%lf",&l);
        c=getchar();
        if(c==' ')
        {
            r1=l;
            scanf("%lf",&r2);
            A=r1;
            A*=r2;
            A*=2;
            A*=pi;
            printf("%.4lf\n",A);
        }
        else
        {
            A=l*l;
            A*=pi;
            A/=8;
            printf("%.4lf\n",A);
        }
    }
    return 0;
}

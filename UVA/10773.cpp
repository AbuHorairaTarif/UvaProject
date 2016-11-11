#include <stdio.h>
#include <math.h>
int main()
{
    int test,i,j;
    double u,v,t,d,t1,t2;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(u>v && u>0 && v>0 && d>0)
        {
            t1=d/sqrt(u*u-v*v);
            t2=d/u;
            t=t1-t2;
            printf("Case %d: %.3lf\n",i,t);
        }
        else
        printf("Case %d: can't determine\n",i);

    }
    return 0;
}

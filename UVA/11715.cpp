#include <stdio.h>
#include <math.h>
int main()

{
    double u,v,a,s,t;
    int test,i=1;
    while(scanf("%d",&test)==1)
    {
        if(test==0) break;
        else if(test==1)
        {
            s=0,v=0,u=0,t=0,a=0;
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t*1.0;
            s=u*t+(a*t*t)/2.0;
            printf("Case %d: %.3lf %.3lf\n",i++,s,a);
        }
        else if(test==2)
        {
            s=0,v=0,u=0,t=0,a=0;
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a*1.0;
            s=u*t+(a*t*t)/2.0;
            printf("Case %d: %.3lf %.3lf\n",i++,s,t);
        }
        else if(test==3)
        {
            s=0,v=0,u=0,t=0,a=0;
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a*1.0;
            printf("Case %d: %.3lf %.3lf\n",i++,v,t);
        }
        else if(test==4)
        {
            s=0,v=0,u=0,t=0,a=0;
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a*1.0;
            printf("Case %d: %.3lf %.3lf\n",i++,u,t);
        }
    }
    return 0;
}

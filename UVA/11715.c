#include <stdio.h>
#include <math.h>

int main()
{
    double s,u,v,a,t,t1,t2;
    int i=1;
    int ch;
    while(scanf("%d",&ch)&&ch!=0) {
    switch(ch){
case 1:
    scanf("%lf%lf%lf",&u,&v,&t);
    a=(v-u)/t;
    s=u*t+.5*a*t*t;
    printf("Case %d: %.3lf %.3lf\n",i,s,a);
    break;
case 2:
    scanf("%lf%lf%lf",&u,&v,&a);
    t=(v-u)/a*1.0;
    s=u*t+.5*a*t*t;

    printf("Case %d: %.3lf %.3lf\n",i,s,t);
    break;
case 3:
    scanf("%lf%lf%lf",&u,&a,&s);
    t=(sqrt(u*u+2.0*s*a)-u)/a;
    v=u+a*t;

    printf("Case %d: %.3lf %.3lf\n",i,v,t);

    break;
case 4:
    scanf("%lf%lf%lf",&v,&a,&s);
    u=sqrt(v*v-2.0*a*s);
    t=(v-u)/a*1.0;
    printf("Case %d: %.3lf %.3lf\n",i,u,t);
    break;
    }
    i++;
       }
        return 0;

}

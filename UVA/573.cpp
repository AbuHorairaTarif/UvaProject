#include <stdio.h>
int main()
{
    double h,u,d,f;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4)
    {
        if(h==0 && u==0 && d==0 && f==0) break;
        f=(f*u)/100.0;
        double ht=0.0;
        int count=0;
        while(1)
        {
            count++;
            if(u>0)
                ht+=u;
            u-=f;

            if(ht>h) break;
            ht-=d;
            if(ht<0) break;
        }
        if(ht>=0) printf("success on day %d\n",count);
        else
            printf("failure on day %d\n",count);
    }
        return 0;
}

#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
int main()
{
    int len,wid,height,angle;

    while(scanf("%d%d%d%d",&len,&wid,&height,&angle)==4){
        double d=len*tan(angle*pi/180.0);
        double ans;
        if(d > height){
            ans=0.5*height*height*len*wid/d;
        }else{
            ans=len*wid*((height)-(d*0.5));
        }
        printf("%.3lf mL\n", ans);
    }
    return 0;
}

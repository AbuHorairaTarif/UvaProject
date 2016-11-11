#include <stdio.h>
#include <math.h>

int main()
{
    double min,hour,angle,hourangle,minuteangle;
    while(scanf("%lf:%lf",&hour,&min)==2)
    {
        if((hour==0) && (min==0))
            break;
        hourangle=hour*30+(min/60)*30;
        minuteangle=min*6;
        angle=hourangle-minuteangle;
        if(angle<0)
            angle*=-1;
        if(angle>180)
            angle=360-angle;

        printf("%.3lf\n",angle);
    }
    return 0;
}

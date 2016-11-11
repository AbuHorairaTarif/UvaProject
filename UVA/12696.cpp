#include <stdio.h>
int main()
{
    int t,lp,total=0;
    scanf("%d",&t);
    for(lp=0;lp<t;lp++)
    {
        double l,wd,h,wi;
        scanf("%lf %lf %lf %lf",&l,&wd,&h,&wi);
        if(((l<=56.0 && wd<=45.0 && h<=25)||(l+wd+h)<=125.00) && wi<=7.00)
        {
            total++;
            printf("1\n");
        }
        else
        printf("0\n");
    }
    printf("%d\n",total);
    return 0;
}

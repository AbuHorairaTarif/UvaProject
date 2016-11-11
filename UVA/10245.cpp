#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct _point
{
    double x;
    double y;
}point;
point p[10100];
int cmp(const void *_a,const void *_b)
{
    point *a=(point *)_a;
    point *b=(point *)_b;
    if(a->x!=b->x)
    return ceil(a->x-b->x);
    return ceil(a->y-b->y);
}
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF && n)
    {
        for(i=0;i<n;i++)
        scanf("%lf%lf",&p[i].x,&p[i].y);
        qsort(p,n,sizeof(point),cmp);
        double min=10001.;
        for(i=0;i<n;i++)
        {
         for(j=i+1;p[j].x-p[i].x<min&&j<n;j++)
         {
             double distance=sqrt(pow(p[j].x-p[i].x,2.)+pow(p[j].y-p[i].y,2.));
             if(distance<min)
                min=distance;
         }
        }
        if(min>=10000)
            printf("INFINITY\n");
        else
            printf("%.4lf\n",min);
    }
    return 0;
}

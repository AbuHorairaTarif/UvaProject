#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
const int maxn=105;
const double eps=1e-6;
struct Point
{
    double x,y;
}p[maxn];
struct Line{Point a,b;};
int dbcmp(double n)
{
    return n<-eps?-1:n>eps;
}
double dis(Point a,Point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
Point intersection(Line u,Line v)
{
    Point ret=u.a;
    double t=((u.a.x-v.a.x)*(v.b.y-v.a.y)-(u.a.y-v.a.y)*(v.b.x-v.a.x))/((u.a.x-u.b.x)*(v.b.y-v.a.y)-(u.a.y-u.b.y)*(v.b.x-v.a.x));
    ret.x+=(u.b.x-u.a.x)*t;
    ret.y+=(u.b.y-u.a.y)*t;
    return ret;
}
Point center(Point a,Point b,Point c)
{
    Line u,v;
    u.a.x=(a.x+b.x)/2;
    u.a.y=(a.y+b.y)/2;
    u.b.x=u.a.x+(u.a.y-a.y);
    u.b.y=u.a.y-(u.a.x-a.x);
    v.a.x=(a.x+c.x)/2;
    v.a.y=(a.y+c.y)/2;
    v.b.x=v.a.x+(v.a.y-a.y);
    v.b.y=v.a.y-(v.a.x-a.x);
    return intersection(u,v);
}
void min_cir(Point *p,int n,Point &cir,double &r)
{
    random_shuffle(p,p+n);
    cir=p[0];
    r=0;
    for(int i=1;i<n;++i)
    {
        if(dbcmp(dis(p[i],cir)-r)<=0)
            continue;
        cir=p[i];
        r=0;
        for(int j=0;j<i;++j)
        {
            if(dbcmp(dis(p[j],cir)-r)<=0)
                continue;
            cir.x=(p[i].x+p[j].x)/2;
            cir.y=(p[i].y+p[j].y)/2;
            r=dis(cir,p[j]);
            for(int k=0;k<j;++k)
            {
                if(dbcmp(dis(p[k],cir)-r)<=0)
                    continue;
                cir=center(p[i],p[j],p[k]);
                r=dis(cir,p[k]);
            }
        }
    }
}
int main()
{
    Point cir;
    double len,r;
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
            scanf("%lf%lf",&p[i].x,&p[i].y);
        scanf("%lf",&len);
        min_cir(p,n,cir,r);
        if(len>r-eps)
            printf("The polygon can be packed in the circle.\n");
        else
            printf("There is no way of packing that polygon.\n");
    }
    return 0;
}

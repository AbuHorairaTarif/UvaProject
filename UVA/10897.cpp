#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int n;
struct point
{
    double x,y;
};
const double R=6371.01;
double dis_3d(double lng1,double lat1,double lng2,double lat2)
{
    double dlon=lng2-lng1;
    double dlat=lat2-lat1;
    double a=pow((sin(dlat/2)),2)+cos(lat1)*cos(lat2)*pow(sin(dlon/2),2);
    double c=2*atan2(sqrt(a),sqrt(1-a));
    double d=R*c;
    return d;
}
int main()
{
    double a,b,c,lng1,lat1,lng2,lat2;
    char s[2];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf%s",&a,&b,&c,s);
        lng1=a+b/60+c/3600;
        if(s[0]=='S')
            lng1*=-1;
        lng1=lng1*pi/180;

        scanf("%lf%lf%lf%s",&a,&b,&c,s);
        lat1=a+b/60+c/3600;
        if(s[0]=='W')
            lat1*=-1;
        lat1=lat1*pi/180;

        scanf("%lf%lf%lf%s",&a,&b,&c,s);
        lng2=a+b/60+c/3600;
        if(s[0]=='S')
            lng2*=-1;
        lng2=lng2*pi/180;

        scanf("%lf%lf%lf%s",&a,&b,&c,s);
        lat2=a+b/60+c/3600;
        if(s[0]=='W')
            lat2*=-1;
        lat2=lat2*pi/180;

        printf("%.2lf\n",dis_3d(lat1,lng1,lat2,lng2));
    }
    return 0;
}

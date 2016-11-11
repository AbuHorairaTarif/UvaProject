#include <cstdio>
#include <cmath>
#define pi 2*acos(0.0)
#define sqr(x) x*x
using namespace std;
int main()
{
    double R,n,r,sArea,outArea;
    while(scanf("%lf %lf",&R,&n)==2)
    {
        if(n==1)
            printf("%.10lf %.10lf %.10lf\n",R,0.0,0.00);
        else
        {
            double theta1=pi/n;
            double alpha=sin(theta1);
            r=(R*alpha)/(1+alpha);
            double theta2=pi-((pi*0.5)+theta1);
            double A1=0.5*(R-r)*r*sin(theta2);
            double A2=r*r*theta2/2;
            double A=A1-A2;
            sArea=2*n*A;
            double incircle_area=n*pi*r*r;
            outArea=pi*sqr(R)-(sArea+incircle_area);
            printf("%.10lf %.10lf %.10lf\n",r,sArea,outArea);
        }
    }
    return 0;
}

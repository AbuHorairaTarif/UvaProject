#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a1,a2,b1,b2,c1,c2,d;
    double x,y,tmp;
    while(scanf("%d %d %d",&a1,&b1,&c1)==3)
    {
        scanf("%d %d %d",&a2,&b2,&c2);
        if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0)
            break;
        d=(a1*b2)-(a2*b1);
        if(d==0)
        {
            printf("No fixed point exists.\n");
            continue;
        }
        tmp=(double)((b2*c1)-(b1*c2))/d;
        if(tmp== -0.00)
            tmp=(-1)*tmp;
        x=tmp;
        tmp=(double)((a1*c2)-(c1*a2))/d;
        if(tmp==-0.00)
            tmp=(-1)*tmp;
        y=tmp;
        printf("The fixed point is at %.2lf %.2lf.\n",x,y);
    }
    return 0;
}

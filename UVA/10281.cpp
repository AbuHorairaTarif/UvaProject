#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char str[30];
    int h,m,s,v,val,now,prev,n;
    double t,dis;
    prev=val=dis=0;
    while(gets(str))
    {
        n=sscanf(str,"%d:%d:%d %d",&h,&m,&s,&v);
        now=h*3600+m*60+s;
        t=(now-prev)/3600.0;
        dis+=t*val;
        prev=now;

        if(n==3) printf("%.02d:%.02d:%.02d %.2lf km\n",h,m,s,dis);
        else val=v;
    }
    return 0;
}

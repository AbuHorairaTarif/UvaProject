#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double m;
    while(cin>>m)
    {
        if(m==0) break;
        int y;
        for(int i=1;;i++)
        {
            int d=i*i*i;
            if(d>m)
            {
                y=i-1;
                break;
            }
        }
        int u=y*y*y;
        double d=(double)u;
        double a=m-d;
        double f=double (y);
        double g;
        g=(1.0/3.0)*(m-f*f*f)/(f*f);
        double r=f+g;
        cout<<setprecision(4)<<fixed<<r<<endl;
    }
    return 0;
}

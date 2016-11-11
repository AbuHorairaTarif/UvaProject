#include <iostream>
#include <cmath>
#include <cstdio>
#define PI acos(-1)
using namespace std;
int main()
{
    double l,x,conv=sin(72*PI/180)/sin(63*PI/180);
    while(cin>>l)
    {
        x=conv*l;
        printf("%.10lf\n",x);
    }
    return 0;
}



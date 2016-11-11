#include <iostream>
#include <complex>
#include <cstdlib>
#include <cstdio>

using namespace std;
#define PI 2*acos(0)

int main()
{
    int n,counter=1;
    double A,rSqr,RSqr;
    while((cin >> n >> A) && n>=3)
    {
        rSqr=A/(n*tan(PI/n));
        RSqr=2*A/(n*sin(2*PI/n));
        printf("Case %d: %.5f %.5f\n",counter++,(PI*RSqr-A),(A-PI*rSqr));
    }
    return 0;
}

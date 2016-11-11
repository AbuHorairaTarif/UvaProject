#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

long long int n, total;


char ss[1000002];

long long int gcd(long long int a, long long int b) { return b?gcd(b,a%b):a; }

void Cal()
{
        long long int m , r, s, x, y, k, z;
        long long int up;
        long long int tri = 0, total = 0;
        m = (long long int)sqrt(n);
        if(m*m < n) m++;
        for(r = 1; r<= m; r++)
        {
                up = min((n - r*r),r-1);
                for(s = 1; s<= up; s++)
                {
                        x = r*r - s*s;
                        y = 2*r*s;
                        z = r*r + s*s;
                        if(x*x + y*y == z*z && z<=n)
                        {
                                if(gcd(x,y) == 1)
                                {
                                        tri++;
                                        for(k = 1; k*z<=n; k++)
                                        {
                                                ss[k*x] = 1;
                                                ss[k*y] = 1;
                                                ss[k*z] = 1;
                                        }
                                }
                        }
                }
        }
        for(k = 1; k<= n; k++)
        {
                if(ss[k] == 0)
                        total++;
                ss[k] = 0;
        }
        printf("%lld %lld\n",tri, total);
}


int main()
{
        while(scanf("%lld",&n) == 1)
        {
                Cal();
        }
        return 0;
}

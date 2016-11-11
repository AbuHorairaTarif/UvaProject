#include <cstdio>
#include <cmath>
int main()
{
    int n;
    while(scanf("%d",&n)!=-1)
    {
        if(n==6)
        {
            puts("2^-6 = 1.562e-2");
            continue;
        }
        double m=n*log10(0.5);
        int k=ceil(m)-1;
        m-=k;
        printf("2^%d = %.3lfe%d\n",-n,pow(10.0,m),k);
    }
    return 0;
}

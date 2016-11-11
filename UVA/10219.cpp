#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int a,b;
    long double res;
    unsigned long long int i;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        res=0;
        for(i=a;i>a-b;i--)
            res+=log10(i);
        for(i=b;i>0;i--)
            res-=log10(i);
        printf("%d\n",(int)floor(res)+1);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    long long int ncase,i,tcase=0;
    scanf("%lld",&ncase);
    while(ncase--)
    {
        double a,sum=0,num;
        long long int avg,b,c,j=-1;
        for(i=0;i<12;i++,sum+=a)
        scanf("%lf",&a);
        sum/=12;
        printf("%lld $",++tcase);
        num=sum-(long long int)sum;
        avg=sum;
        b=avg%1000;
        avg/=1000;
        if(avg>0)
            printf("%lld,",avg);
        printf("%.2lf\n",b+num);
    }
    return 0;
}

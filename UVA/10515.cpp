#include <stdio.h>
#include <math.h>

int main()
{
   unsigned long long num,temp,m,n;
    while(scanf("%llu%llu",&m,&n)==2)
    {
        if(m==0 && n==0)break;
        num=pow(m,n);
        temp=num%10;
        printf("%llu\n",temp);
    }
    return 0;
}

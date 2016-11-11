#include <stdio.h>
int main()
{
    int a,i;
    while(scanf("%d",&a)==1)
    {
        if(a==0) break;
        unsigned long long s,sum=0;
        for(i=1;i<=a;i++)
        {
            s=i*i;
            sum+=s;
        }
        printf("%llu\n",sum);
    }
    return 0;
}

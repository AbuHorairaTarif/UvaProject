#include <stdio.h>
int main()
{
    int n,test,step;
    long long int a,b,c,d,count=0;
    while(scanf("%d",&test)==1)
    {
        while(test--)
        {
            count=0;
            scanf("%d",&step);
            while(step--)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                d=a*c;
                count+=d;
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}

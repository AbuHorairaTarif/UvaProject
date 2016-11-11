#include <stdio.h>
#define N 305
int cal[N];
int main()
{
    int a,b,i,c,t,sum;
    long long int d,e,ans,f,g;
    a=1;
    b=0;
    sum=1;
    cal[1]=1;
    for(i=2;i<=300;i++)
    {
        c=b+a;
        c=c%100;
        b=a;
        a=c;
        sum+=c;
        cal[i]=sum;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&d,&e);
        d-=1;
        f=e/300;
        g=d/300;
        e=e%300;
        d=d%300;
        ans=sum*f+cal[e]-sum*g-cal[d];
        printf("%lld\n",ans);
    }
    return 0;
}

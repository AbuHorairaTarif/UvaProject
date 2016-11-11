#include <cstdio>
#include <cstring>
int month,n;
double downpay,owe;
double dep[105];
int main()
{
    while(scanf("%d%lf%lf%d",&month,&downpay,&owe,&n)!=-1)
    {
        if(month<0) break;
        memset(dep,0,sizeof(dep));
        while(n--)
        {
            int temp;
            double r;
            scanf("%d%lf",&temp,&r);
            dep[temp]=r;
        }
        double car=owe+downpay;
        double monthpay=owe/month;
        double nowdep=0;
        int i=0;
        while(true)
        {
            if(dep[i])
                nowdep=dep[i];
            car*=(1-nowdep);
            if(owe<car)
                break;
            owe-=monthpay;
            i++;
        }
        if(i==1)
            puts("1 month");
        else
            printf("%d months\n",i);
    }
    return 0;
}

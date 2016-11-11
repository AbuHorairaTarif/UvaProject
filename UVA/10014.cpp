#include <cstdio>
int main(void)
{
    int t,n;
    double a0,an,c,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0.0;
        scanf("%d%lf%lf",&n,&a0,&an);
        for(int i=1;i<=n;i++)
        {
            scanf("%lf",&c);
            sum+=(n+1-i)*c;
        }
        printf("%.2f\n",(an+n*a0-2*sum)/(n+1));
        if(t)
            putchar('\n');
    }
    return 0;
}

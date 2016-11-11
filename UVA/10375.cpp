#include <stdio.h>
int main()
{
    int p,q,r,s;
    double ans;
    while(~scanf("%d%d%d%d",&p,&q,&r,&s))
    {
        ans=1.0;
        if(p-q<q)
            q=p-q;
        if(r-s<s)
            s=r-s;
        for(int i=1;i<=q|| i<=s;i++)
        {
            if(i<=q)
                ans=ans*(p-q+i)/i;
            if(i<=s)
                ans=ans/(r-s+i)*i;
        }
        printf("%.5lf\n",ans);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>


main()
{
    int sum,x,y,n,t=1,i,tc;
    long long int m,j,k,l;
    while(scanf("%d%d%d",&n,&x,&y)==3)
    {
        for(i=1;i<=n;i++)
        {
            m=pow(2,i);
            k=ceil(x/(double)m);
            l=ceil(y/(double)m);
            if(k==l || i==n)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}

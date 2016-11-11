#include <stdio.h>
int main()
{
    long long int n,i,c;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        c=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                c=c+1;
            if(c>0)
                break;
        }
        if(c>0)
            printf("The number %lld is a Carmichael number.\n",n);
        else
            printf("%lld is normal.\n",n);
    }
    return 0;
}

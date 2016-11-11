#include <stdio.h>
int main()
{
    long long int i,n,cas;
    scanf("%lld",&cas);
    while(cas--)
    {
        scanf("%lld",&n);
        long long int p=0;
        while(n!=0)
        {
            p+=n%2;
            n/=2;
        }
        printf("%lld\n",p);
    }
    return 0;
}

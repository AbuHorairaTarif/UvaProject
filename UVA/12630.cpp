#include <stdio.h>

int main()
{
    long long int n,tri;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
    tri=(n+2)*(n+1)*n*(n-1)/24;
    printf("%lld\n",tri);
}
return 0;
}

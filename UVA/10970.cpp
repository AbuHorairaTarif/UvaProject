#include <stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        printf("%lld\n",(a*b)-1);
    }
    return 0;

}

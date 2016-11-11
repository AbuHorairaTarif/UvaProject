#include <stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)&&n)
    {
        long long num=1;
        while(num<n)
        {
            num*=2;
            num++;
        }
        if(num==n)printf("Bob\n");
        else printf("Alice\n");
    }
    return 0;
}

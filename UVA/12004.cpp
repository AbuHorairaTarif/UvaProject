#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int test,cas=1;
    long long int n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld",&n);
        printf("Case %d: ",cas++);
        if(n*(n-1)%4==0)
            printf("%lld\n",n*(n-1)/4);
        else printf("%lld/2\n",n*(n-1)/2);
    }
    return 0;
}

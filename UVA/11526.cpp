#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int ans =0;
        long long int limit=(long long int)sqrt(n+0.0);
        for(long long int i=1;i<=limit;i++) {
            ans+=n/i;
            if(n/i>i) ans+=i*(n/(i)-n/(i+1));
        }
        printf("%lld\n",ans);
    }
    return 0;
}

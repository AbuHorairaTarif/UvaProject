#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int a,b,i;
    for(i=1;;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0) break;
        if(a==0 || b==0)
        {
            printf("Case %lld: 0\n",i);
            continue;
        }
        printf("Case %lld: %lld\n",i,((a*b)*(a-1)*(b-1))/4);
    }
    return 0;
}

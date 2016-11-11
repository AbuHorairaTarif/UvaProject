#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    long long int n,sum,test,i;
    for(i=1;;i++)
    {
        scanf("%lld",&test);
        if(test==0) break;
        sum=0;
        while(test--)
        {
            scanf("%lld",&n);
            if(n!=0)
            {
                sum+=1;
            }
            else if(n==0)
            {
                sum-=1;
            }
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}

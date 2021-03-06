#include <cstdio>
#include <iostream>
using namespace std;
long dd[1000000];
int main()
{
    long long int n;
    long int b,m;
    long int cases=0;

    while(1)
    {
        scanf("%lld%ld",&n,&b);
        if(!n && !b) break;
        cases++;

        dd[0]=1;
        dd[1]=1;
        for(m=2;m<1000000;m++)
        {
            dd[m]=(dd[m-1]+dd[m-2]+1)%b;
            if(dd[m]==1 && dd[m-1]==1)
                break;
        }
        m--;

        printf("Case %ld: %lld %ld %ld\n",cases,n,b,dd[n%m]);
    }
    return 0;
}

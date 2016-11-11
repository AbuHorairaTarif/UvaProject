#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int ans,cas,n;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        ans=0;
        double num=log10(1.);
        for(int i=2;i<=n;++i)
        {
            num+=log10((double)i);
        }
        ans=(int)num;
        printf("%d\n",ans+1);
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int a[22]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,273,733,919,991};
int main()
{
    int n,i,ans,num,p;
    while(scanf("%d",&num)&&num)
    {
        n=num;
        p=1;
        ans=0;

        while(n)
        {
            p*=10;
            n/=10;
        }

        for(i=0;i<22;i++)
        {
            if(a[i]>num)
            {
                ans=a[i];
                break;
            }
        }
        if(a[i]>=p)
            ans=0;
        printf("%d\n",ans);
    }
    return 0;
}

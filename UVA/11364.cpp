#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105];
int main()
{
    int test,p,i,n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            p=a[n-1]-a[0];
        }
        printf("%d\n",p*2);
    }
    return 0;
}

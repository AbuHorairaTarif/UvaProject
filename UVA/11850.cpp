#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int a[1422+10];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        bool flag=true;
        for(int i=1;i<n;i++)
            if(a[i]-a[i-1] > 200)
            flag=false;
        if(2*(1422-a[n-1])>200)
            flag=false;
        if(flag)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}

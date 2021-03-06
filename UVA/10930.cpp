#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    int n;
    int a[30+5];
    int dp[1000+10];
    int cases=0;
    while(scanf("%d",&n)!=EOF )
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=1000;j>=0;j--)
                if(dp[j]&& j +a[i]<=1000)
                dp[j+a[i]]++;
        }
        bool a_seq=true;
        if(a[0]<1) a_seq=false;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1]) a_seq=false;
        }
        for(int i=0;i<n;i++)
        {
            if(dp[a[i]]>1) a_seq=false;
        }
        printf("Case #%d:",++cases);
        for(int i=0;i<n;i++)
            printf(" %d",a[i]);
        printf("\n");
        if(a_seq) printf("This is an A-sequence.\n");
        else printf("This is not an A-sequence.\n");
    }
    return 0;
}

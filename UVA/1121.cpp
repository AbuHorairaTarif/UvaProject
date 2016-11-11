#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=100000+10;
int A[maxn];
int main()
{
    int n,s;
    while(~scanf("%d%d",&n,&s))
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&A[i]);
        int i=1,tot=0,ans=n+1;
        for(int j=1;j<=n;j++)
        {
            tot+=A[j];
            if(tot<s) continue;
            while(tot-A[i]>s)
                tot-=A[i++];
            ans=min(ans,j-i+1);
        }
        printf("%d\n",ans==n+1?0:ans);
    }
    return 0;
}

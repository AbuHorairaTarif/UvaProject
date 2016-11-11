#include <cstdio>
#include <cstring>
using namespace std;
bool isp[100],used[30];

bool is_prime(int x)
{
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
    return 1;
}

int n,ans[30];
void dfs(int now)
{
    if(now==n)
    {
        if(isp[ans[n-1]+ans[0]])
        {
            printf("%d",ans[0]);
            for(int i=1;i<n;i++)
                printf(" %d",ans[i]);
            puts("");
        }
    }
    else
    {
        if(!now)
        {
            ans[now]=1;
            used[1]=1;
            dfs(now+1);
            ans[now]=0;
            used[1]=0;
        }
        else
        {
            for(int i=1;i<=n;i++)
                if(!used[i]&&isp[ans[now-1]+i])
            {
                ans[now]=i;
                used[i]=1;
                dfs(now+1);
                ans[now]=0;
                used[i]=0;
            }
        }
    }
}
int kase;
int main()
{
    for(int i=2;i<=50;i++)
        isp[i]=is_prime(i);
    while(~scanf("%d",&n)&&n)
    {
        if(kase>0)
            puts("");
        printf("Case %d:\n",++kase);
        dfs(0);
    }
    return 0;
}

#include <cstdio>
void solve(int n)
{
    int i,ans=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("= %d * %d ",i,n/i);
            ans++;
        }
        if(ans==2) break;
    }
}

int main()
{
    int t,n,i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case #%d: %d ",i++,n);
        solve(n);
        printf("\n");
    }
    return 0;
}

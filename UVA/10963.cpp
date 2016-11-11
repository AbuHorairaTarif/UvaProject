#include <cstdio>
int main()
{
    int cc,tt=0;
    scanf("%d",&cc);
    while(cc--)
    {
        int a,b,n;
        scanf("%d",&n);
        scanf("%d%d",&a,&b);
        int ans=a-b;
        bool flag=true;
        for(int i=2;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            if(ans!=a-b)
                flag=false;
        }
        if(tt++)
            puts("");
        if(flag)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}

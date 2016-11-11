#include<cstdio>
#include<cstring>
int main()
{
    char num[150];
    int n=0;
    while(scanf("%s",num))
    {
        int len=strlen(num)-1;
        if(num[0]=='0') break;
        n=num[len]-'0';
        if(len>=1)
        n+=(num[len-1]-'0')*10;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int t=1;
            for(int j=1;j<=i;j++)
            t=t*i%10;
            ans=(ans+t)%10;
        }
        printf("%d\n",ans);
    }
    return 0;
}

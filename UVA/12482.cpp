#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char s[75];
int main()
{
    int n,m,c,i,j,k,ans,len,now;
    while(~scanf("%d%d%d",&n,&m,&c))
    {
        ans=1;
        now=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            len=strlen(s);
            if(now+len<=c)
            {
                now+=len+1;
            }
            else
            {
                now = len+1;
                ans++;
            }
            if(now>c)
            {
                now=0;
                ans++;
            }
        }
        if(now==0)
            ans--;
        printf("%d\n",(ans+m-1)/m);
    }
    return 0;
}

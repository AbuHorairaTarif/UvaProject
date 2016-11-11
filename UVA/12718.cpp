#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
char s[10100];
int c[30];
int main()
{
    int i,j,m,n,k,t,T,ans,cas=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf(" %s",s);
        n=strlen(s);
        ans=n;
        for(i=0;i<n;i++)
        {
            memset(c,0,sizeof(c));
            c[s[i]-'a']++;
            t=1;
            for(j=i+1;j<n;j++)
            {
                c[s[j]-'a']=1-c[s[j]-'a'];
                if(c[s[j]-'a']) t++;
                else t--;
                if(t<=1) ans++;
            }
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

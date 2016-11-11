#include <stdio.h>
#include <string.h>
char s1[111],s2[111];
int a[111],b[111],ans[111];
void calcu(int i)
{
    if(i==0)
    {
        if(ans[i]==2)
            ans[0]=0,ans[1]++;
    }
    else if(ans[i-1])
    {
        ans[i-1]--;
        ans[i]--;
        ans[i+1]++;
    }
    else if(ans[i]>=2)
    {
        ans[i]-=2;
        ans[i+1]++;
        if(i==1) ans[0]++;
        else
        {
            ans[i-2]++;
            calcu(i-2);
        }
    }
}
int main()
{
    int i,j,k,flag=0;
    while(scanf("%s%s",s1,s2)!=-1)
    {
        if(flag)
            puts("");
            flag++;
            int len1=strlen(s1);
            for(i=0;i<len1;i++)
                a[i]=s1[len1-1-i]-'0';
            int len2=strlen(s2);
            for(i=0;i<len2;i++)
                b[i]=s2[len2-1-i]-'0';

            if(len1<len2) len1=len2;
            for(i=0;i<len1;i++)
            {
                ans[i]+=a[i]+b[i];
                if(ans[i]) calcu(i);
            }
            if(ans[len1]) calcu(len1++);
            if(ans[len1]) len1++;
            for(i=len1-1;i>=0;i--)
                printf("%d",ans[i]);
            puts("");
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            memset(ans,0,sizeof(ans));
    }
    return 0;
}

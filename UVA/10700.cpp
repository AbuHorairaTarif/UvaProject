#include <stdio.h>
char s[1024];
long long int n,a[24],b[24];
long long int max()
{
    int i,cnt=0;
    long long int ans=1;
    b[0]=a[0];
    for(i=0,cnt=0;s[i];i++)
        if(s[i]=='+' || s[i]=='*')
    {
        cnt++;
        b[cnt]=a[cnt];
        if(s[i]=='+')
        {
            b[cnt]+=b[cnt-1];
            b[cnt-1]=1;
        }
    }
    for(i=0;i<n;i++) ans*=b[i];
    return ans;
}
long long int min()
{
    int i,cnt=0;
    long long int ans=0;
    b[0]=a[0];
    for(i=0,cnt=0;s[i];i++)

        if(s[i]=='+' || s[i]=='*')
    {
        cnt++;
        b[cnt]=a[cnt];
        if(s[i]=='*')
        {
            b[cnt]*=b[cnt-1];
            b[cnt-1]=0;
        }
    }
    for(i=0;i<n;i++)
        ans+=b[i];
    return ans;
}
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        n=0;
        scanf("%s",s);
        a[n]=0;
        for(i=0;s[i];i++)
            if(s[i]>='0' && s[i]<='9')
            a[n]=a[n]*10+s[i]-'0';
        else a[++n]=0;
        n++;
        printf("The maximum and minimum are %lld and %lld.\n",max(),min());
    }
    return 0;
}

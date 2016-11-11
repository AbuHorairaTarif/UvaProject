#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int t,n,i,j,ans,num;
int a[5005],f[5005];
string s;
int main()
{
    scanf("%d",&t);
    int cas=0;
    while(t--)
    {
        cin>>n;
        cin>>s;
        f[0]=0;
        if(s[0]=='#')
            f[1]=0;
        else f[1]=1;
        for(int i=2;i<=n;i++)
            if(s[i-1]=='#')
            f[i]=f[i-1];
        else
        {
            f[i]=f[i-1]+1;
            if(i>=2)
                f[i]=min(f[i],f[i-2]+1);
            if(i>=3)
                f[i]=min(f[i],f[i-3]+1);
        }
        printf("Case %d: %d\n",++cas,f[n]);
    }
    return 0;
}

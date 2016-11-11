#include <bits/stdc++.h>
#define INF 0x3f3f3f
using namespace std;

int a[100],b[100],c[100];
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        int num=1,l=1,kk=k;
        while(kk>1)
        {
            l++;
            while(kk%l==0)
            {
                kk/=l;
                if(a[num-1]!=l)
                    a[num++]=l;
                b[num-1]++;
            }
        }
        int ans1=INF;
        double ans2=1.0;
        for(int i=1;i<=n;i++)
        {
            int kk=i;
            for(int j=1;j<num;j++)
                while(kk%a[j]==0)
            {
                kk/=a[j];
                c[j]++;
            }
            ans2+=(log(i)/log(k));
        }
        for(int i=1;i<num;i++)
            ans1=min(ans1,c[i]/b[i]);
        printf("%d %d\n",ans1,(int)ans2);
    }
    return 0;
}

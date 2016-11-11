#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char c1[20],c2[20];
int num1,num2,d[300000],n;
void format(int a,int b)
{
    int t=a,len=0;
    int x,y,i;
    while(t)
    {
        len++;
        t/=10;
    }
    i=1;
    for(t=len;t>1;t--)
        i*=10;
    for(;i>0;i/=10)
    {
        x=a/i;
        y=b/i;
        if(x==y)
        {
            a%=i;
            b%=i;
        }
        else break;
    }
    printf("-%d\n",b);
}

int main()
{
    int tt=0;
    for(scanf("%d",&n);n!=0;scanf("%d",&n))
    {
        tt++;
        memset(d,0,sizeof(d));
        printf("Case %d:\n",tt);
        for(int i=1;i<=n;++i)
            scanf("%d",d+i);
        printf("0%d",d[1]);
        int start=d[1];
        bool flag=false;
        for(int i=2;i<=n;i++)
        {
            if(d[i]-d[i-1]==1)
            {
                flag=true;
                continue;
            }
            else
            {
                if(flag)
                    format(start,d[i-1]);
                else
                    printf("\n");
                flag = false;
                start = d[i];
                printf("0%d",d[i]);
            }
        }
        if(flag)
            format(start,d[n]);
        else
            printf("\n");
        printf("\n");
    }
    return 0;
}

#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int n,in;
int c[103][103];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&in);
            c[i][j]=in+c[i][j-1];
        }
    }
    int res=-9999,tm;
    for(int j=1;j<=n;j++)
    {
        for(int i=j;i<=n;i++)
        {
            tm=0;
            for(int k=1;k<=n;k++)
            {
                tm+=c[k][i]-c[k][j-1];
                res=max(res,tm);
                if(tm<0)
                    tm=0;
            }
        }
    }
    printf("%d\n",res);
    return 0;
}

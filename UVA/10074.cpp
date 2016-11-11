#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x,y,arr[105][105],tmp,i,j,k,ans;
    while(scanf("%d%d",&x,&y) && x+y)
    {
        for(i=1;i<=x;i++)
            for(j=1;j<=y;j++)
        {
            scanf("%d",&arr[i][j]);
            arr[i][j]+=arr[i-1][j];
        }
        ans=0;
        for(i=1;i<=x;i++)
            for(j=i;j<=x;j++)
        {
            tmp=0;
            for(k=1;k<=y;k++)
            {
                tmp=(arr[j][k]-arr[i-1][k]==0?tmp+(j-i+1) : 0);
                if(tmp>ans)
                    ans=tmp;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int num[100005];
int main()
{
    int n,g;
    while(scanf("%d%d",&n,&g)==2)
    {
        int i,j;
        for(i=1;i<=n;i++)
        {
            int s,r;
            scanf("%d%d",&s,&r);
            num[i]=r-s;
        }
        sort(num+1,num+1+n);
        int ans=0,need=0,has=0;
        for(i=1;i<=n;i++)
            if(num[i]>=0)
        {
            has++;
            need+=num[i];
            if(g>=need)
            {
                int k=g-need;
                if(k>has)
                    k=has;
                if(ans<k*3+has-k)
                    ans=k*3+has-k;
            }
        }
        for(i=1;i<=n;i++)
            if(num[i]<0)
            ans+=3;
        printf("%d\n",ans);
      }
      return 0;
}

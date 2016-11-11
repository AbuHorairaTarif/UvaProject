#include <stdio.h>
int main()
{
    int n,i,j,k,high,low,a,b[50];
    while(scanf("%d",&a)==1)
    {
        for(j=1;j<=a;j++)
        {
            high=0;
            low=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&b[i]);
            }
            for(i=1;i<n;i++)
            {
                if(b[i]>b[i-1])
                    high+=1;
                if(b[i]<b[i-1])
                    low+=1;
            }
            printf("Case %d: %d %d\n",j,high,low);
        }
    }
    return 0;
}

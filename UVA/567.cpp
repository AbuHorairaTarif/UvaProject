#include <bits/stdc++.h>
#define inf 100000000
using namespace std;
int main()
{
    int a[25][25],i,j,k,cs=0,n,p,q;
    while(scanf("%d",&n)!=EOF)
    {
        printf("Test Set #%d\n",++cs);
        for(i=0;i<25;i++)
            for(j=0;j<25;j++)
            a[i][j]=inf;
        while(n--)
        {
            scanf("%d",&p);
            a[1][p]=a[p][1]=1;
        }
        for(i=2;i<20;i++)
        {
            scanf("%d",&n);
            while(n--)
            {
                scanf("%d",&p);
                a[i][p]=a[p][i]=1;
            }
        }
        for(k=1;k<21;k++)
            for(i=1;i<21;i++)
            for(j=1;j<21;j++)
            if(a[i][j]>a[i][k]+a[k][j])
            a[i][j]=a[i][k]+a[k][j];
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&p,&q);
            printf("%2d to %2d: %d\n",p,q,a[p][q]);
        }
        printf("\n");
    }
    return 0;
}

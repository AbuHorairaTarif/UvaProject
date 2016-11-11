#include<stdio.h>
#define M 1000002
int a[M];
int b[M];
int res[M];

int main()
{
    int t,c,m,i;
    //freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        c=0;
        for(i=0;i<m;i++)
            scanf("%d%d",&a[i],&b[i]);
        for(i=m-1;i>=0;i--)
        {
            res[i]=(a[i]+b[i]+c)%10;
            c=(a[i]+b[i]+c)/10;
        }
        for(i=0;i<m;i++)
            printf("%d",res[i]);
        if(t)
            printf("\n\n");
        else
            printf("\n");
    }
    return 0;
}

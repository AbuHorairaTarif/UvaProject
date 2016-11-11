#include <stdio.h>
#include <string.h>
int a[50],b[50];
int n,p,m,q;
void swap(int x)
{
    int i,j,t;
    for(i=0,j=x;j>i;j--,i++)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int i,j;
    while(scanf("%d",&a[0])!=EOF)
    {
        n=1;
        while(1)
        {
            if(getchar()!=' ')
                break;
            scanf("%d",&a[n++]);
        }
        printf("%d",a[0]);
        for(i=1;i<n;i++)
            printf(" %d",a[i]);
        printf("\n");
        q=0;
        for(i=0;i<n;i++)
        {
            for(j=n-i-1,m=-10000;j>=0;j--)
                if(a[j]>m)
            {
                m=a[j];
                p=j;
            }
            if(p!=n-i-1)
            {
                if(p!=0)
                {
                    swap(p);
                    b[q++]=n-p;
                }
                swap(n-i-1);
                b[q++]=i+1;
            }
        }
        if(q==0)
            printf("%d\n",0);
        else
        {
            for(i=0;i<q;i++)
                printf("%d ",b[i]);
            printf("%d\n",0);
        }
    }
    return 0;
}

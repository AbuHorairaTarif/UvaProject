#include <stdio.h>
int main()
{
    int a,b,c,test,sum,i,j;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

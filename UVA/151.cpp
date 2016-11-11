#include <stdio.h>
int main()
{
    int n,m=1,i,k,s,d,temp;
    while(scanf("%d",&n)==1 && n)
    {
        for(temp=1;temp<2000;temp++)
        {
            s=0;
            k=temp;
            for(i=2;i<=n;i++)
                s=(s+k)%i;
            k=k%n;
            if(!k) k=n;
            d=(s+1)+(m-k);
            if(d==13 || d+n==13 || d%n==13)
                break;
        }
    printf("%d\n",temp);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long  num,com,sum,count;
    int test,i;
    while(scanf("%d",&test)==1)
    {
        for(i=1;i<=test;i++)
        {
            scanf("%lld",&num);
        com=num;
        count=0;
        while(1)
        {
            sum=0;
        while(num!=0)
            {
                sum=sum*10+num%10;
                num=num/10;
            }
        if(sum==com)
        break;
        else
        {
        num=sum+com;
        com=sum+com;
        count++;
        }
        }
    printf("%lld %lld\n",count,com);
        }
    }

   return 0;
}

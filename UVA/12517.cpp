#include <stdio.h>
int main()
{
    int a,b,c,i,sum;
    while (scanf("%d%d",&a,&b)==2)
    {
        sum=0;
        for(i=a;i<=b;i++)
        {

            sum=sum+i;

        }
        printf("%d\n",sum);
    }
}

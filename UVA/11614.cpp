#include <stdio.h>
#include <math.h>

int main()
{
    long long int i,test,sum,row;
    scanf("%lld",&test);
    for(i=0;i<test;i++)
    {
        scanf("%lld",&sum);
        row=(-1+sqrt(1+8*sum))/2;
        printf("%lld\n",row);
    }
    return 0;
}

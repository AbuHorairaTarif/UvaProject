#include <stdio.h>
 long long int calculate(long long int num);
 long long int a,b,c,num,sum,i,j,r,rem,n;
int main()
{
    while(scanf("%lld",&n)==1)
    {
    if(n==0) break;
    printf("%lld\n",calculate(n));
    }
return 0;
}
long long int calculate(long long int num)
    {
        sum=0;

        while(num!=0)
        {

        sum=sum+num%10;
        num=num/10;

        }
        if (sum>9) return (calculate(sum));
        else return sum;
    }

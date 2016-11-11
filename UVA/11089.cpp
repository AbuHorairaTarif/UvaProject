#include <stdio.h>
int main()
{
long long int fib_series[45]={1,2},n;
int t,i;
for(i=2;i<45;++i)
fib_series[i]=fib_series[i-1]+fib_series[i-2];
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
i=44;
while(fib_series[i]>n)
i--;
for(;i>=0;--i)
{
if(fib_series[i]<=n)
{
printf("1");
n-=fib_series[i];
}
else
printf("0");
}
puts("");
}
return 0;
}

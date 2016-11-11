#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
while(n>=0)
{
if(n==1)
printf("0%%\n");
else
printf("%lld%%\n",n*25);
scanf("%lld",&n);
}
return 0;
}

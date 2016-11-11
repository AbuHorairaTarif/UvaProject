#include<stdio.h>
int main()
{

 long long int i,j,temp,count,d,y;
while(scanf("%lld%lld",&i,&j)==2&&i&&j)
{
      printf("%lld %lld ",i,j);
if(i>j)
{
temp=j;
j=i;
i=temp;
}
y=0;
for(temp=i;temp<=j;temp++)
{
count=1;
d=temp;
while(d!=1)
{
if(d%2==0)
{
d=d/2;
}
else
{
d=3*d+1;
}
count++;
}
if(y<count)
y=count;
}

printf("%lld\n",y);
}
return 0;
}

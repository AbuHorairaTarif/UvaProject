#include <stdio.h>
int main()
{
int n,k,rem,num;
while((scanf("%d%d",&n,&k))==2 )
{
num=n;
rem=n/k;
	while(rem!=0)
	{
			num=num+rem;
			rem=rem/k;
	}
	printf("%d\n",num);
}
  return 0;
}

#include<stdio.h>
#include<math.h>
long long int divisor(long long int n)
{
	long long int i,div;
	  double sqrtn;
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else{
		div=2;
		sqrtn=sqrt(n);
	for(i=2;i<sqrtn;i++)
	{
		if(n%i==0)
		{
			div=div+2;
		}
	}
	if(sqrtn*sqrtn==n)
		div++;
		return div;
	}
}

int main() {
    long long int n,div,max=0,U,L,T,a=1,maxn;
    scanf("%lld",&T);
    while(a<=T)
	{

    scanf("%lld %lld",&L,&U);
    max=0;

	for(n=L;n<=U;n++)
    {
	div=divisor(n);

	if(div>max){
			maxn=n;
		max=div;
	}
}
printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,maxn,max);
a++;
	}
	return 0;
}


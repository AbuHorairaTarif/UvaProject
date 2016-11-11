#include<stdio.h>
#define SQR(x) ((x)*(x))
#define DIS2(x1,y1,x2,y2) (SQR(x2-x1)+SQR(y2-y1))
const double EXP=1e-12;
int main()
{
	int n,p,i;
	double a,x,y;
	while(scanf("%d%lf",&n,&a)!=EOF)
	{
		if(n==0 && a==0)
			break;
		for(p=i=0;i<n;i++)
		{
			scanf("%lf%lf",&x,&y);
			if(DIS2(0,0,x,y)-SQR(a)>EXP ||
				DIS2(0,a,x,y)-SQR(a)>EXP ||
				DIS2(a,0,x,y)-SQR(a)>EXP ||
				DIS2(a,a,x,y)-SQR(a)>EXP)
				continue;
			p++;
		}
		printf("%0.5lf\n",p*SQR(a)/n);
	}
	return 0;
}

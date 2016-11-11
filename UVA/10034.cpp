#include <stdio.h>
#include <math.h>
#include <memory.h>
#define MAXN 120
#define INF 1e100
#define Sqrt(x) ((x)*(x))
#define dist(i,j) (Sqrt(x[i]-x[j])+Sqrt(y[i]-y[j]))
double x[MAXN],y[MAXN],arc[MAXN][MAXN],low[MAXN];
int N;
int in[MAXN];
double Prim_MST()
{
	int p,i,j;
	double min,cost=0.0;
	memset(in,0,sizeof(in));
	for(i=1;i<N;i++)
		low[i]=arc[0][i];
	for(i=1;i<N;i++)
	{
		min=INF;
		for(j=1;j<N;j++)
			if(!in[j] && min>low[j])
			{
				p=j;
				min=low[j];
			}
		if(min==INF)
			return -1;
		in[p]=1;
		cost+=sqrt(min);
		for(j=1;j<N;j++)
			if(!in[j] && low[j]>arc[p][j])
				low[j]=arc[p][j];
	}
	return cost;
}
int main()
{
	int i,j;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
			scanf("%lf%lf",&x[i],&y[i]);
		for(i=0;i<N;i++)
			for(j=0;j<i;j++)
				arc[j][i]=arc[i][j]=dist(i,j);
		printf("%.2lf\n",Prim_MST());
		if(T)
			printf("\n");
	}
	return 0;
}

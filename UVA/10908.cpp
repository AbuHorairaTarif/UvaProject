#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int T;
	int M,N,Q;
	int i,j,k;
	int sum,sign;
	int x,y;
	char a[150][150];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d ",&M,&N,&Q);
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
				a[i][j]=getchar();
			getchar();
		}
		printf("%d %d %d\n",M,N,Q);
		while(Q--)
		{
			sum=1;
			scanf("%d %d",&x,&y);
			for(sign=1,k=1;x-k>=0&&x+k<M&&y-k>=0&&y+k<N;k++)
			{
				for(i=x-k;i<=x+k;i++)
				{
					if(i==x-k||i==x+k)
					{
						for(j=y-k;j<=y+k;j++)
						{
							if(a[i][j]!=a[x][y])
							{
								sign=0;
								break;
							}
						}
					}
					else
					{
						if(a[i][y-k]!=a[x][y]||a[i][y+k]!=a[x][y])
						{
							sign=0;
							break;
						}
					}
					if(sign==0)
						break;
				}
				if(sign==0)
					break;
				sum+=2;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}

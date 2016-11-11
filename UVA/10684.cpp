#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int n,a,tmp,sum;
	while(scanf("%d",&n) && n)
	{
		sum=tmp=0;
		while(n--)
		{
			scanf("%d",&a);
			tmp=max(0,tmp+a);
			if(tmp>sum)sum=tmp;
		}
		if(sum>0) printf("The maximum winning streak is %d.\n",sum);
		else printf("Losing streak.\n");
	}
	return 0;
}

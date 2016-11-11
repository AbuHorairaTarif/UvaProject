#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("a.in","r",stdin);
	int n;
	while(scanf("%d",&n)==1 && n)
	{
		int a;
		bool b=false;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>0)
			{
				if(b)printf(" ");
				b=true;
				printf("%d",a);
			}
		}
		if(!b)printf("0");
		puts("");
	}
	return 0;
}

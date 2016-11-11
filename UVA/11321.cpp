#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define MAX 10005
int A[MAX],m;
bool comp(int a,int b)
{
	if((a%m)!=(b%m))return (a%m)<(b%m);
	if((a%2==1||a%2==-1)&&(b%2==1||b%2==-1))return a>b;
	if((a%2==0)&&(b%2==0))return a<b;
	return (a%2==1||a%2==-1);
}
int main()
{
	int n,i;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		printf("%d %d\n",n,m);
		if(n==0&&m==0)return 0;
		for(i=0;i<n;i++)scanf("%d",A+i);
		sort(A,A+n,comp);
		for(i=0;i<n;i++)
			printf("%d\n",A[i]);
	}
	return 0;
}

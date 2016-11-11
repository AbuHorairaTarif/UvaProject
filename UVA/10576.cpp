#include <iostream>
#include <cstring>

using namespace std;

int A[15];
int s , d , sum , res;

int main()
{
	while(cin>>s>>d)
	{
		res=0;
		int i;
		for(i=1 ; i<=12 ; i++)
		{
			A[i]=s;
			if(i>4)
			{
				sum=0;
				for(int j=i ; j>i-5 ; j--)
				{
					sum+=A[j];
				}
				int j=i;
				while(sum>0)
				{
					sum-=A[j];
					A[j]=d*-1;
					sum+=A[j];
					j--;
				}
			}
		}

		for(int i=1 ; i<=12 ; i++)
		{
			if(A[i]==s)
				res+=s;
			else
				res-=d;
		}
		if(res>0)
			cout<<res<<endl;
		else
			cout<<"Deficit"<<endl;
	}
	return 0;
}

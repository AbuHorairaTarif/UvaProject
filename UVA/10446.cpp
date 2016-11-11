#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

typedef unsigned long long int ull;
ull dp[100][100];
ull solve(int n,int back)
{
    if(n<=1) return 1;
    if(dp[n][back]!=0)
        return dp[n][back];
    ull sum=0;
    for(int i=1;i<=back;i++)
    {
        sum=sum+solve(n-i,back);
    }
    return dp[n][back]=1+sum;
}
int main()
{
    int n,back,cs=1;
    while(cin>>n>>back&&n<=60)
    {
        memset(dp,0,sizeof(dp));
        cout<<"Case "<<cs++<<": "<<solve(n,back)<<endl;
    }
    return 0;
}

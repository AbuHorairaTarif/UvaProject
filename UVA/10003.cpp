#include <iostream>
#include <string.h>
#define MAX 0xffffff
using namespace std;
int cut[55];

int d[55][55];

int dp(int i,int j)
{
    if(d[i][j]!=-1)
        return d[i][j];
    else if(i+1==j)
        return d[i][j]=0;
    d[i][j]=MAX;
    for(int k=i+1;k<j;k++) {
        int next=dp(i,k)+dp(k,j)+cut[j]-cut[i];
        d[i][j]=min(d[i][j],next);
    }
    return d[i][j];
}

int main()
{
    int n,i,j,l;
    while(cin>>l && l!=0)
    {
        memset(d,-1,sizeof(d));
        cin>>n;
        cut[0]=0;
        cut[n+1]=l;
        for(i=1;i<=n;i++)
            cin>>cut[i];
        int ans=dp(0,n+1);
        cout<<"The minimum cutting is "<<ans<<"."<<endl;
    }
    return 0;
}

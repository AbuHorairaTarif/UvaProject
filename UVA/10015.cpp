#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#define MAXN 100010
#define clr(x,y) memset(x,y,sizeof(x))
using namespace std;

bool vis[MAXN];
vector<int> prime;

void shif(int n)
{
    clr(vis,0);
    prime.clear();
    for(int i=2;i<=n;i++)
        if(!vis[i])
    {
        prime.push_back(i);
        for(int j=i*i;j<=n;j+=i)
            vis[j]=1;
    }
}
int solve(int n,int id)
{
    if(n==1) return 1;
    int kill=prime[id]%n;
    if(kill==0)
        kill=n;
    int save;
    save=kill+solve(n-1,id+1);
    if(save>n)
        save-=n;
    return save;
}

int main()
{
    shif(33000);
    int n;
    while(~scanf("%d",&n) &&n>0)
        printf("%d\n",solve(n,0));
    return 0;
}

#include <cstdio>
#include <iostream>

using namespace std;
#define sz 32

char grid[sz][sz];
bool used[sz][sz];
int R,C,I,J,ans,land;

int dfs(int i,int j)
{
    if(i<0 || i>=R)
        return 0;
    if(j==-1)
        j=C-1;
    else if(j==C)
        j=0;

    if(grid[i][j]!=land)
    {
        return 0;
    }

    grid[i][j]=0;
    return 1+dfs(i-1,j)+dfs(i+1,j)+dfs(i,j-1)+dfs(i,j+1);
}
int calc()
{
    int cnt;
    ans=0;
    land=grid[I][J];
    dfs(I,J);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(grid[i][j]==land)
            {
                cnt=dfs(i,j);
                if(cnt>ans)
                    ans=cnt;
            }
        }
    }
    return ans;
}

int main()
{
    while(scanf("%d %d",&R,&C)==2)
    {
        for(int i=0;i<R;i++)
        {
            scanf("%s",grid[i]);
        }
        scanf("%d %d",&I,&J);
        printf("%d\n",calc());
    }
    return 0;
}

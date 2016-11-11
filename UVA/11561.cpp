#include <cstdio>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
char grid[51][51],ch[2];
int row,col,gold;
void dfs(int x,int y)
{
    if(grid[x][y]=='v') return;
    if(x<=0 || y<=0||x>=row||y>=col)return;
    if(grid[x][y]=='G')
    gold++;
    grid[x][y]='v';
    if(grid[x-1][y]=='T'||grid[x][y-1]=='T'||grid[x][y+1]=='T'||grid[x+1][y]=='T')
        return;
    if(grid[x-1][y]!='#')
        dfs(x-1,y);
    if(grid[x][y-1]!='#')
        dfs(x,y-1);
    if(grid[x][y+1]!='#')
        dfs(x,y+1);
    if(grid[x+1][y]!='#')
        dfs(x+1,y);
}
int main()
{
    int i,j,flag,a,b;
    while(scanf("%d %d",&col,&row)==2)
    {
        gold=0;
        flag=0;
        gets(ch);
        for(i=0;i<row;i++)
            gets(grid[i]);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j]=='P')
                {
                    a=i;
                    b=j;
                    flag=1;
                    break;
                }
                if(flag) break;
            }
        }
        dfs(a,b);
        printf("%d\n",gold);
    }
    return 0;
}

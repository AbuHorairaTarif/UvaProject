#include <cstdio>
#include <queue>
using namespace std;

int dimension;
char a[28][28];
queue <int> q;

void dfs(int x,int y)
{
    q.push(x);
    q.push(y);

    while(!q.empty())
    {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        if(a[x-1][y]=='1')
        {
            q.push(x-1);
            q.push(y);
            a[x-1][y]='0';
        }
        if(a[x+1][y]=='1')
        {
            q.push(x+1);
            q.push(y);
            a[x+1][y]='0';
        }
        if(a[x][y-1]=='1')
        {
            q.push(x);
            q.push(y-1);
            a[x][y-1]='0';
        }
        if(a[x][y+1]=='1')
        {
            q.push(x);
            q.push(y+1);
            a[x][y+1]='0';
        }
        if(a[x-1][y+1]=='1')
        {
            q.push(x-1);
            q.push(y+1);
            a[x-1][y+1]='0';
        }
        if(a[x+1][y+1]=='1')
        {
            q.push(x+1);
            q.push(y+1);
            a[x+1][y+1]='0';
        }
        if(a[x+1][y-1]=='1')
        {
            q.push(x+1);
            q.push(y-1);
            a[x+1][y-1]='0';
        }
        if(a[x-1][y-1]=='1')
        {
            q.push(x-1);
            q.push(y-1);
            a[x-1][y-1]='0';
        }
    }
}
int main()
{
    int cases =0;
    while(scanf("%d",&dimension)!=EOF)
    {
        getchar();
        for(int i=0;i<dimension;i++)
            scanf("%s",a[i]);
        int count =0;
        for(int i=0;i<dimension;i++)
        {
            for(int j=0;j<dimension;j++)
            {
                if(a[i][j]=='1')
                {
                    dfs(i,j);
                    count++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++cases,count);
    }
    return 0;
}

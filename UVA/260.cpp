#include <stdio.h>
#include <string.h>
int n;
bool flag,table[210][210];
char s[210][210];
void dfs(int i,int j)
{
    if(i<0||i==n||j<0||j==n||s[i][j]=='b'||table[i][j]) return;
    if(j==n-1)
    {
        flag=true;
        return;
    }
    table[i][j]=true;
    dfs(i-1,j-1);
    dfs(i-1,j);
    dfs(i,j-1);
    dfs (i,j+1);
    dfs(i+1,j);
    dfs(i+1,j+1);
}
int main()
{
    int kase=0;
    while(scanf("%d",&n)&&n)
    {
        memset(table,0,sizeof(table));
        for(int i=0;i<n;i++)    scanf("%s",s[i]);
        flag=false;
        for(int j=0;j<n;j++)
            if(s[j][0]=='w')  dfs(j,0);
        if(flag)    printf("%d W\n",++kase);
        else    printf("%d B\n",++kase);
    }
}

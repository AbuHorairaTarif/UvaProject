#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int cnt, r, c, visited[105][105];
char mat[105][105];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void DFS(int i, int j)
{
    if(i<0 || i>=r || j<0 || j>=c || mat[i][j] == 'L' || visited[i][j]) return;
    visited[i][j] = true;
    cnt++;
    for(int k=0; k<8; k++)
        DFS(i+dx[k], j+dy[k]);
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int t, i, j;
    char s[1100];
    bool blank = false;
    scanf("%d", &t);
    getchar();
    getchar();

    while(t--)
    {
        r=0;
        while(gets(s) && strlen(s))
        {
            if(s[0] == 'L' || s[0] == 'W')
            {
                strcpy(mat[r++], s);
                c = strlen(s);
            }
            else
            {
                sscanf(s, "%d %d", &i, &j);
                cnt = 0;
                memset(visited, false, sizeof visited);
                DFS(i-1, j-1);
                printf("%d\n", cnt);
            }

        }
        if(t) printf("\n");
    }
    return 0;
}

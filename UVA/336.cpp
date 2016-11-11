#include <bits/stdc++.h>
#define inf 1000000000
using namespace std;
vector<int>v[1000];
int vis[1000],level[1000],n;
void bfs(int st)
{
    memset(vis,0,sizeof vis);
    queue<int>q;
    q.push(st);
    level[st]=0;
    vis[st]=1;
    while(!q.empty())
    {
        int fr=q.front();
        q.pop();
        for(int j=0;j<v[fr].size();j++)
        {
            int a=v[fr][j];
            if(!vis[a])
            {
                level[a]=level[fr]+1;
                vis[a]=1;
                q.push(a);
            }
        }
    }
}
int main()
{
    int tc=1,nc,x,y;
    map<int,int>mp;
    while(cin>>nc && nc)
    {
        for(int i=0;i<=1000;i++)
            v[i].clear();
        int in=1;
        for(int i=0;i<nc;i++)
        {
            cin>>x>>y;
            if(mp.find(x)==mp.end())
                mp[x]=in++;
            if(mp.find(y)==mp.end())
                mp[y]=in++;
            v[mp[x]].push_back(mp[y]);
            v[mp[y]].push_back(mp[x]);
        }
        int node,lev;
        while(cin>>node>>lev)
        {
            if(!node && !lev) break;
            for(int i=0;i<in;i++)
                level[i]=inf;
            bfs(mp[node]);
            int res=0;
            for(int i=1;i<in;i++)
            {
                if(level[i]>lev)
                    res++;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,res,node,lev);
        }
        mp.clear();
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;
stringstream ss;
map<char,int> M;
map<int,char> S;
vector<int> var,matrix[22],ans;
bool vis[22];
bool is_valid(int u)
{
    for(int i=0;i<matrix[u].size();i++)
        if(vis[matrix[u][i]])
        return false;
    return true;
}
void dfs()
{
    if(ans.size()==var.size())
    {
        for(int i=0;i<ans.size();i++)
            printf("%c",S[ans[i]]);
        puts("");
    }
    for(int i=0;i<var.size();i++)
    {
        if(!vis[var[i]] && is_valid(var[i]))
        {
            vis[var[i]]=true;
            ans.push_back(var[i]);
            dfs();
            vis[var[i]]=false;
            ans.pop_back();
        }
    }
}
bool cmp(int a,int b)
{
    return S[a]<S[b];
}
int main()
{
    bool found = false;
    char a,b;
    string line;
    while(getline(cin,line))
    {
        if(found) puts("");
        found = true;
        M.clear();
        S.clear();
        var.clear();
        for(int i=0;i<22;i++)
            matrix[i].clear();
        memset(vis,false,sizeof(vis));
        ans.clear();
        ss.clear();
        ss<<line;
        int cnt=0;
        while(ss>>a)
        {
            S[cnt]=a;
            M[a]=cnt++;
            var.push_back(M[a]);
        }
        sort(var.begin(),var.end(),cmp);
        getline(cin,line);
        ss.clear();
        ss<<line;
        while(ss>>a>>b)
            matrix[M[a]].push_back(M[b]);
        dfs();
    }
    return 0;
}

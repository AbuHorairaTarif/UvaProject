#include <stdio.h>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector < int > v;
    map<int,int>m;
    map<int,int>t;
    int n,k=0,y=1,s=0;
    while(scanf("%d",&n)==1)
    {
        v.push_back(n);
    }
    for(int i=0;i<v.size();i++)
    {
        int x=v[i];
        if(m.find(x)==m.end())
        {
            s++;
            t[s]=x;
            y=1;
            m[x]=y;
        }
        else
        {
            m[x]=y+m[x];
        }
    }
    for(int i=1;i<=s;i++)
    {
        printf("%d %d\n",t[i],m[t[i]]);
    }
    return 0;
}

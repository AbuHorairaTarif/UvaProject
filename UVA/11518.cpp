#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <math.h>
using namespace std;

vector <int> dependentList[10000+10];
bool down [10000+10];
void recur(int k)
{
    if(down[k]) return;
    down[k] =true;

    for(size_t i=0;i<dependentList[k].size();i++)
        recur(dependentList[k][i]);
}
void reset()
{
    memset(down,false,sizeof(down));
    for(int i=0;i<10010;i++)
        dependentList[i].clear();
}
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        reset();
        for(int i=0;i<m;i++)
        {
            int p,q;
            cin>>p>>q;
            dependentList[p].push_back(q);
        }
        for(int i=0;i<l;i++)
        {
            int k;
            cin>>k;
            recur(k);
        }
        int fallOver =0;
        for(int i=1;i<=n;i++)
        {
            if(down[i])
                fallOver++;
        }
        cout<<fallOver<<endl;
    }
    return 0;
}

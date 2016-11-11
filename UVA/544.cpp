#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
map<string,short> pool;
short edge[201][201],seq;
void floyd(int n)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        for(int k=1;k<=n;k++)
        edge[j][k]=max(edge[j][k],min(edge[j][i],edge[i][k]));
}

short insertAndCheck(string &city)
{
    short indexOf;
    if(pool.count(city))
        indexOf=pool[city];
    else
    {
        indexOf=seq;
        pool[city]=seq++;
    }
    return indexOf;
}

int main()
{
    int cases=0;
    short cities,roads,u,v,length;
    string city1,city2,start,destination;
    while(cin>>cities>>roads,cities!=0)
    {
        memset(edge,0,sizeof edge);
        seq=1;
        pool.clear();
        for(int i=0;i<roads;i++)
        {
            cin>>city1>>city2>>length;
            u=insertAndCheck(city1);
            v=insertAndCheck(city2);
            edge[u][v]=length;
            edge[v][u]=length;
        }
        floyd(cities);
        cin>>start>>destination;
        cout<<"Scenario #"<<++cases<<endl;
        cout<<edge[pool[start]][pool[destination]]<<" tons"<<endl<<endl;
    }
    return 0;
}

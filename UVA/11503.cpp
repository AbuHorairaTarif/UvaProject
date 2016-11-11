#include <bits/stdc++.h>
#define max 100005
using namespace std;
map<string,long int>mymap;
long long int par[max];
int i,n,tc,check,temp;
string s,s1,s2;
long int arr[max];
int find(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);
}
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>check;
        mymap.clear();
        int u,v,tag=0,temp=1,k=1,ts=0;
        while(check--)
        {
            cin>>s1>>s2;
            if(!mymap[s1])
            {
                mymap[s1]=++tag;
                par[tag]=tag;
                arr[tag]=1;
            }
            if(!mymap[s2])
            {
                mymap[s2]=++tag;
                par[tag]=tag;
                arr[tag]=1;
            }
            u=find(mymap[s1]);
            v=find(mymap[s2]);

            if(u!=v)
            {
                par[u]=v;
                arr[v]+=arr[u];
                printf("%ld\n",arr[v]);
            }
            else
                printf("%ld\n",arr[v]);
        }
    }
    return 0;
}

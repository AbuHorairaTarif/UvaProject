#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;
int u[500005];
int v[500005];
int main()
{
    int n,flag;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        flag=1;
        for(int i=0;i<n;i++)
            scanf("%d%d",&u[i],&v[i]);
        sort(u,u+n);
        sort(v,v+n);
        for(int i=0;i<n;i++)
        {
            if(u[i]!=v[i])
                flag=0;
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int n,t,m;
    while(scanf("%d%d%d",&n,&t,&m)==3)
    {
        bool solved[22][222];
        memset(solved,0,sizeof solved);
        int lastid[33],last[344];
        memset(last,-1,sizeof last);
        while(m--)
        {
            int T,id;
            char s[33],str[44];
            scanf("%d%d%s%s",&T,&id,s,str);
            int prob =s[0]-'A';
            if(solved[prob][id]) continue;
            if(str[0]=='N') continue;
            lastid[prob]=id;
            last[prob]=T;
            solved[prob][id]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(last[i]==-1)
                printf("%c - -\n",i+'A');
            else
                printf("%c %d %d\n",i+'A',last[i],lastid[i]);
        }
    }
    return 0;
}

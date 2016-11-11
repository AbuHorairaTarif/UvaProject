#include<bits/stdc++.h>
using namespace std;
char par[100];
char parent(char r)
{
    if(par[r]==r)
    {
        return r;
    }

    else
    {
        return par[r]=parent(par[r]);
    }
}

int main()
{
  char c,ch[5],s[5],i,res,u,v;
  int tc;
  cin>>tc;
  scanf("\n");
  while(tc--)
  {
    gets(ch);
    c=ch[0];
    res=c-'A'+1;
    for(i='A';i<=c;i++)
    {
        par[i]=i;
    }
    while(gets(s) && s[0])
    {
        u=s[0];
        v=s[1];
        if(parent(u) != parent(v))
        {
            par[parent(u)]=parent(v);
            --res;
        }
    }
    printf("%d\n",res);
    if(tc)
    {
        printf("\n");
        scanf("\n");
    }
  }
  return 0;
}

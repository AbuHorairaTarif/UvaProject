#include <bits/stdc++.h>
#define mx 35
using namespace std;
char text[mx];
int n,colour[mx],len;
vector <char> result;
void backtrack()
{
  if(result.size()==n)
  {
      for(int j=0;j<n;j++)
        printf("%c",result[j]);
      printf("\n");
      return;
  }
  for(int i=0;i<len;i++)
  {
      int sz=result.size();
      if(colour[i]==0)
      {
          if(sz>0)
            if(result[sz-1]>text[i])
            continue;
          colour[i]=1;
          result.push_back(text[i]);
          backtrack();
          colour[i]=0;
          result.pop_back();
          while(text[i]==text[i+1])
            i++;
      }
  }
}
int main()
{
    while(scanf("%s %d",text,&n)==2)
    {
        len=strlen(text);
        sort(text,text+len);
        backtrack();
        memset(colour,0,sizeof colour);
        memset(text,'\0',sizeof text);
        result.clear();
    }
    return 0;
}

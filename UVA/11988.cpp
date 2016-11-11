#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAXN 100000
using namespace std;

int Next[MAXN+20];
char S[MAXN+20];
int last,cur,len;

void init()
{
    memset(Next,0,sizeof(Next));
    cur=0;
    last=0;
}

int main()
{
    int i;
    while(scanf("%s",S+1)==1)
    {
        init();
        len=strlen(S+1);
        for(i=1;i<=len;i++)
        {
            if(S[i]=='[')
                cur=0;
            else if(S[i]==']')
                cur=last;
            else {
                Next[i]=Next[cur];
                Next[cur]=i;
                if(cur==last) last=i;
                cur=i;
            }
        }
        for(i=Next[0];i!=0;i=Next[i])
        printf("%c",S[i]);
        puts("");
}
return 0;
}

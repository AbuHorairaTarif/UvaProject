#include <stdio.h>
#include <string.h>
using namespace std;
const int N=150;
char s[N],ans[N],c;
int t,l;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        strcpy(ans,s);
        for(int i=0;i<l;++i)
        {
            c=s[l-1];
            for(int j=l-1;j>=1;--j)
                s[j]=s[j-1];
                s[0]=c;
                if(strcmp(s,ans)<0)
                    strcpy(ans,s);
        }
        printf("%s\n",ans);
    }
    return 0;
}

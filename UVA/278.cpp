#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,t,m,n;
    char ch[3];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        scanf("%d %d",&m,&n);
        if(ch[0]=='k')
            printf("%d\n",((m*n)+1)/2);
        else if(ch[0]=='r')
            printf("%d\n",min(m,n));
        else if(ch[0]=='Q')
            printf("%d\n",min(m,n));
        else if(ch[0]=='K')
            printf("%d\n",((n+1)/2)*((m+1)/2));
    }
    return 0;
}

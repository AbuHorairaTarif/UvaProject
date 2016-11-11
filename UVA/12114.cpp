#include <cstdio>
int main()
{
    int tt=1,b,s;
    while(scanf("%d%d",&b,&s)!=-1)
    {
        if(b==0 && s==0)
            break;
        if(b==0 || b==1)
            printf("Case %d: :-\\\n",tt++);
        else if(b<=s)
            printf("Case %d: :-|\n",tt++);
        else
            printf("Case %d: :-(\n",tt++);
    }
    return 0;
}

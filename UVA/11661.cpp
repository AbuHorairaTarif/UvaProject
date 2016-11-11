#include <stdio.h>
#define min(a,b) (a>b?b:a)
int main()
{
    int i,j,a,b,n;
    char ch,st;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        getchar();
        int flag=0,f=0,mi=99999999,cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%c",&ch);
            if(ch=='Z'||flag==1)
            {
                flag=1;
                continue;
            }
            if(ch=='.')
                cnt++;
            if(ch=='R'||ch=='D')
            {
                if(f==0)
                    f=1,st=ch;
                if(st!=ch)
                {
                    mi=min(mi,cnt);
                    st=ch;
                    cnt=1;
                }
                else cnt=1;
            }
        }
        if(flag==1) printf("0\n");
        else printf("%d\n",mi);
    }
    return 0;
}

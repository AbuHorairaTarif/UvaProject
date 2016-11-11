#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mark[3010];
int main()
{
    int n=0,a,b,i;
    while(scanf("%d",&n)>0)
    {
        int flag=1;
        memset(mark,0,sizeof mark);
        scanf("%d",&a);
        for(i=1;i<n;i++)
        {
            scanf("%d",&b);
            if(abs(a-b)>=n)
                flag=0;
            if(mark[abs(a-b)]++)
                flag=0;
            a=b;
        }
        puts(flag? "Jolly":"Not jolly");
    }
    return 0;
}

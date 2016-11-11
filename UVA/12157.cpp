#include <stdio.h>
int main()
{
    int test,i,call,juice,time,mile,kase=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&call);
        mile=0,juice=0;
        for(i=0;i<call;i++)
        {
            scanf("%d",&time);
            mile+=(time+30)/30;
            juice+=(time+60)/60;
        }
        mile*=10;
        juice*=15;
        if(mile<juice)
        printf("Case %d: Mile %d\n",kase++,mile);
        else if(juice <mile)
            printf("Case %d: Juice %d\n",kase++,juice);
        else
            printf("Case %d: Mile Juice %d\n",kase++,mile);
    }
    return 0;
}

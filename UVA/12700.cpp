#include <stdio.h>
#include <string.h>

int main()
{
    int b,w,match,a,t,i,j,k,test;
    char str[12];
    scanf("%d",&test);
    for(j=0;j<test;j++)
    {
        scanf("%d",&match);
        getchar();
        b=0,w=0,a=0,t=0;
        gets(str);
        for(i=0;i<match;i++)
        {
            if(str[i] == 'B')
                b+=1;
            if(str[i] == 'W')
                w+=1;
            if(str[i] == 'T')
                t+=1;
            if(str[i] == 'A')
                a+=1;
        }
        if(a==match)
            printf("Case %d: ABANDONED\n",j+1);

        else if(b<=match && w==0 && t==0 )
            printf("Case %d: BANGLAWASH\n",j+1);
        else if(w<=match && b==0 && t==0)
            printf("Case %d: WHITEWASH\n",j+1);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",j+1,b,w);
        else if(w>b)
            printf("Case %d: WWW %d - %d\n",j+1,w,b);
            else if(w==b)
            printf("Case %d: DRAW %d %d\n",j+1,w,t);

        }
        return 0;
}

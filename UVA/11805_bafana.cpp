#include <stdio.h>
int main()
{
    int i,test,plnum,playerno,pass,post;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
        { scanf("%d %d %d",&plnum,&playerno,&pass);
        post=(playerno+pass)%plnum;
        if(post>0)
          printf("Case %d: %d\n",i,post);
          else printf("Case %d: %d\n",i,plnum);
        }
return 0;
}

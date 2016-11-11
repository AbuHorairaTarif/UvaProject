# include <stdio.h>
int main()
{
    int total,mod,sum,test,drink,i,has,collect,req;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
   {
       scanf("%d %d %d",&has,&collect,&req);
       sum = 0;
       total = has+collect;
        while(total>=req)
        {
          mod = total%req;
          drink = total/req;
          sum+=drink;
          total = drink+mod;
        }
         printf("%d\n",sum);
    }
    return 0;
}

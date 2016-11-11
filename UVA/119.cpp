#include <cstdio>
#include <cstring>
char name[100][100];
int money[100],n;
int  getid(char *str)
{
    for(int i=1;i<=n;i++)
    {
        if(strcmp(name[i],str)==0)
            return i;
    }
}

int main()
{
    int tt=0;
    while(scanf("%d",&n)!=-1)
    {
        memset(money,0,sizeof(money));
        memset(name,0,sizeof(name));
        for(int i=1;i<=n;i++)
            scanf("%s",name[i]);
        for(int i=1;i<=n;i++)
        {
            char temp[15];
            int amount,person;
            scanf("%s%d%d",temp,&amount,&person);
            int id=getid(temp);
            for(int j=1;j<=person;j++)
            {
                scanf("%s",temp);
                int temp_id=getid(temp);
                money[temp_id]+=amount/person;
            }
            if(person)
                money[id]-=(amount-amount%person);
        }
        if(tt)
            puts("");
        tt++;
        for(int i=1;i<=n;i++)
        {
            printf("%s %d\n",name[i],money[i]);
        }
    }
    return 0;
}

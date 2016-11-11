#include <stdio.h>
#include <string.h>
int stroke,s[105];
int JudgeCorrect(char *a,char *b)
{
    int cnt,i,j,flag;
    stroke=0;
    cnt=0;
    memset(s,0,sizeof(s));
    for(i=0;i<strlen(b);i++)
    {
        flag=0;
        if(stroke==7)
            break;
        for(j=0;j<strlen(a);j++)
        {
            if(b[i]==a[j]&&!s[j])
            {
                s[j]=1;
                cnt++;
                flag=1;
            }
        }
        if(!flag)
            stroke++;
    }
    return cnt;
}

int main()
{
    int i,j,cases,count,flag;
    char guess[105],answer[105];
    while(~scanf("%d",&cases)&&cases!=-1)
    {
        getchar();
        gets(answer);
        gets(guess);
        count=JudgeCorrect(answer,guess);
        printf("Round %d\n",cases);
        if(count==strlen(answer))
            printf("You win.\n");
        else if(stroke==7)
            printf("You lose.\n");
        else
            printf("You chickened out.\n");
    }
    return 0;
}

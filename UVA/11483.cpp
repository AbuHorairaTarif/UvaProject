#include <stdio.h>
#include <string.h>
int main()
{
    int t,kase=0,i,j,m,d=1;
    char s[150][150];
    while(scanf("%d",&t)&&t)
    {
        getchar();
        printf("Case %d:\n",++kase);
        for(i=0;i<t;i++)
        {
            gets(s[i]);
            while(strlen(s[i])==0)    gets(s[i]);
        }
        puts("#include<string.h>\n#include<stdio.h>\nint main()\n{");
        for(i=0;i<t;i++)
        {
            printf("printf(\"");
            for(j=0;s[i][j];j++)
            {
                if(s[i][j]=='"')   printf("\\\"");
                else if(s[i][j]=='\\') printf("\\\\");
                else    putc(s[i][j],stdout);
            }
            printf("\\n\");\n");
        }
        puts("printf(\"\\n\");\nreturn 0;\n}");
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000],c,i,j;
    int test,count;
    scanf("%d",&test);
    getchar();

    for(count=1;count<=test;count++) {
        gets(s);
        int len=strlen(s);
        printf("Case %d: ",count);
        for(i=0;i<len;i++)
        {
            int p=0;
            if(s[i]>='A'&&s[i]<='Z')
                c=s[i];
            else if (s[i]>='0'&&s[i]<='9')
            {
                p=p+s[i]-'0';
                i++;
                while(s[i]>='0' && s[i]<='9')
                {
                    p=p*10+s[i]-'0';
                    i++;
                }
                i--;
                for(j=0;j<p;j++)
                {
                    printf("%c",c);
                }
            }
        }
           printf("\n");
    }
}

#include <stdio.h>
#include <string.h>
int main()
{
    int t,k,i,j,m=0,sum=0;
    char s[85];
    scanf("%d",&t);
    getchar();
    for(k=1;k<=t;k++)
    {
        sum=0;
        m=0;
        gets(s);
        j=strlen(s);
        for(i=0;i<j;i++)
        {
            if(s[i]=='O')
            {
                m=m+1;
                sum=sum+m;
            }
            else
            {
                m=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,s;
    char n[10000];
    while(1)
    {
        s=0;
        scanf("%s",&n);
        j=strlen(n);
        for(i=0;i<strlen(n);i++)
        {
            s=s*10+n[i]-'0';
            s=s%11;
        }
        if(s==0 && j==1)break;
        else if(s==0)
            printf("%s is a multiple of 11.\n",n);
        else printf("%s is not a multiple of 11.\n",n);
    }
    return 0;
}

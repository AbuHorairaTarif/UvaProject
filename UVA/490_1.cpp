#include <stdio.h>
#include <string.h>
int main()
{
    char s[102][102];
    int i,j,k,l,high=0;
    memset(s,0,sizeof(s));
    for(i=0;;i++)
    {
        gets(s[i]);
        l=strlen(s[i]);
        if(s[i][0]=='\0' && l==0)
        {
            break;
        }
        if(l>high)
        {
            high=l;
        }
    }
    for(k=0;k<high;k++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(s[j][k]==0)
            {
                printf(" ");
            }
            else
            {
                printf("%c",s[j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;
char sta[1005],stb[1005];
int a[100],b[100];
void calc(char str[],int num[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        num[str[i]-'a']++;
}
int main()
{
    while(gets(sta)!=NULL)
    {
        int i,j;
        gets(stb);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        calc(sta,a);
        calc(stb,b);
        for(i=0;i<26;i++)
        {
            for(j=0;j<a[i] &&j<b[i];j++)
                printf("%c",'a'+i);
        }
        printf("\n");
    }
    return 0;
}

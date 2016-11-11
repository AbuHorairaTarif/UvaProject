#include <stdio.h>
int main()
{
    char c,s[20];
    int i;
    gets(s);
    while(gets(s)&&s[0]!='_')
    {
        c=0;
        for(i=2;i<=5;i++)
        if(s[i]=='o')
        c=c*2+1;
        else c*=2;

        for(i=7;i<=9;i++)
            if(s[i]=='o')
            c=c*2+1;
        else c*=2;
        putchar(c);
    }
    return 0;
}

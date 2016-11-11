#include <stdio.h>
int main()
{
    int n=0,i;
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(ch>='0' && ch<='9')
            n+=ch-48;
        else if((ch>='A' && ch<='Z')|| ch=='*' || ch=='b')
        {
            for(i=1;i<=n;i++)
            {
                if(ch=='b')
                    putchar(' ');
                else
                    putchar(ch);
            }
            n=0;
        }
        else
            putchar('\n');
    }
    return 0;
}

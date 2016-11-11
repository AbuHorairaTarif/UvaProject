#include <stdio.h>
#include <string.h>

int GetSoundCode(char ch)
{
    switch(ch)
    {
    case 'B': case 'F': case 'P': case 'V':
        return 1;
    case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z':
        return 2;
    case 'D': case 'T':
        return 3;
    case 'L':
        return 4;
    case 'M': case 'N':
        return 5;
    case 'R':
        return 6;
    }
    return -1;
}
int main()
{
    char str[20];
    int i,tmp,val;
    while(scanf("%s",str)==1)
    {
        tmp=0;
        for(i=0;i<strlen(str);i++)
        {
            val=GetSoundCode(str[i]);
            if(val>-1 && tmp !=val)
            {
                printf("%d",val);
            }
            tmp=val;
        }
        printf("\n");
    }
    return 0;
}

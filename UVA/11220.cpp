#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
char mas[1000],word[100];
int main()
{
    int t;
    scanf("%d\n\n",&t);
    for(int cs=1;cs<=t;cs++)
    {
        printf("Case #%d:\n",cs);
        while(gets(mas) && strcmp(mas,""))
        {
            for(int i=0,j=0; mas[i]; )
            {
                while(mas[i] && mas[i]==' ') i++;
                for(int k=0;mas[i] && mas[i]!=' ';i++,k++)
                {
                    if(j==k)
                    {
                        putchar(mas[i]);
                        j++;
                        break;
                    }
                }
                while(mas[i] && mas[i]!=' ') i++;
            }
            putchar('\n');
        }
        if(cs<t) putchar('\n');
    }
    return 0;
}

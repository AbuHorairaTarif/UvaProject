#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <map>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    int testCase;
    scanf("%d",&testCase);
    int cases=0;
    bool blank = false;

    while(testCase--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        if(blank) printf("\n");
        blank = true;
        printf("Case %d:\n",++cases);
        for(int i=0;i<n;i++)
        {
            char ch[1000];
            gets(ch);
            bool space=true;
            for(int j=0;ch[j];j++)
            {
                if(ch[j]==' ')
                {
                    if(space) printf(" ");
                    space = false;
                }
                else
                    {
                    space =true;
                printf("%c",ch[j]);
                }

            }
             printf("\n");
        }

    }
    return 0;
}

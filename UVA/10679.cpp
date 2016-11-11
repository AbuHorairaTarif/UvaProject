#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;
char main_str[100001],sub_str[1001];
int main()
{
    int test,n,c,i,j;
    char ch[2];
    scanf("%d",&test);
    gets(ch);
    while(test--)
    {
        gets(main_str);
        scanf("%d",&n);
        gets(ch);
        while(n--)
        {
            gets(sub_str);
            c=0;
            i=0;
            while(sub_str[i]!='\0')
            {
                if(sub_str[i]!=main_str[i])
                {
                    c=1;
                    break;
                }
                i++;
            }
            if(c==0) printf("y\n");
            if(c==1) printf("n\n");
        }
    }
    return 0;
}

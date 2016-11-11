#include <stdio.h>
#include <string.h>
struct matrix {
    int row;
    int col;
    int flag;
}mat[10000];

int rows[30];
int cols[30];
char c[30];
char str[10000];

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int i;
    for(i=0;i<n;++i)
    {
        scanf("%c%d%d",&c[i],&rows[i],&cols[i]);
        getchar();
    }
    while(scanf("%s",str)!=EOF)
    {
        int top=0;
        int len=strlen(str);
        int sum=0;
        int error=0;

        for(i=0;i<len;++i)
        {
            if(str[i]=='(')
            {
                mat[top].flag=1;
                mat[top].row=0;
                mat[top].col=0;
                ++top;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                mat[top].flag=0;
                mat[top].row=rows[str[i]-'A'];
                mat[top].col=cols[str[i]-'A'];
                ++top;
            }

            else if(str[i]==')')
            {
                if(mat[top-2].col == mat[top-1].row)
                {
                    int r = mat[top-2].row;
                    int c = mat[top-1].col;

                    sum += r * mat[top-2].col * c;
                    top-=3;
                    mat[top].row = r;
                    mat[top].col = c;
                    mat[top].flag = 0;
                    ++top;
                }
                else {
                    error = 1;
                    break;
                }
            }
        }
        if(error == 1)
            printf("error\n");
        else
            printf("%d\n",sum);
    }
    return 0;
}

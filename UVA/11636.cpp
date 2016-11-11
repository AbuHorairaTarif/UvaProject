#include <stdio.h>
int main()
{
    int n,test,line,paste,i=1;
    while(scanf("%d",&n)==1)
    {
        paste=0;
        line =1;
        if(n<0)break;

        while(1)
        {
            line = line*2;
        if(line>=n)
        {
            paste++;
            break;
        }
        else paste++;
        }
        if (n==1 || n==0) paste = 0;

        printf("Case %d: %d\n",i++,paste);
    }
    return 0;
}

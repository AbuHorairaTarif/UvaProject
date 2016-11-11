#include <stdio.h>
int main()
{
    int e,f,c,test,drank,empty,more;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d",&e,&f,&c);
        drank=0;
        empty=e+f;
        while(empty>=c)
        {
            more=empty/c;
            empty=empty%c;
            drank=drank+more;
            empty=empty+more;
        }
        printf("%d\n",drank);
    }
    return 0;
}

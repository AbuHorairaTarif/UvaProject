#include <stdio.h>
int main()
{
    int i,test,a,b;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d%d",&a,&b);
        if(b%a==0)
            printf("%d %d\n",a,b);
        else printf("-1\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n,lp,t;
    char a,b,c;
    scanf("%d",&t);
    for(lp=0;lp<t;lp++)
    {
        scanf(" %c%c%c-%d",&a,&b,&c,&n);
        int num=((a-'A')*26*26+(b-'A')*26+(c-'A'));
        if(n-num<=100 && n-num>=-100)
            printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}

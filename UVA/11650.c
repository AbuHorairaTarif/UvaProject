#include <stdio.h>
int main()
{
    int test,hr,mi,i;

    while(scanf("%d",&test)==1)
    {
        for(i=0;i<test;i++) {
        scanf("%d:%d",&hr,&mi);
        hr=11-hr+(mi==0);

        if(hr<=0)
            hr=hr+12;
        if(hr!=0)
            mi=60-mi;
        if(mi==60)
            mi=0;

        printf("%02d:%02d\n",hr,mi);
    }
    break;
    }
    return 0;
}

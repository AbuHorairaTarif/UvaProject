#include <stdio.h>
int main()
{
    int h,m,hr,min,time,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d:%d",&hr,&min);
        hr=11-hr+(min==0);
        if(hr<=0)
            hr=hr+12;
        if(hr!=0)
            min=60-min;
        if(min==60)
            min=0;
        printf("%02d:%02d\n",hr,min);

    }
    return 0;
}

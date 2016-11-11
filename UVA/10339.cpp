#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int k,m;
int main()
{
    while(~scanf("%d%d",&k,&m))
    {
        int d=abs(m-k);
        int min =(int)(12*60*1.0/d *(24*60*60-k)+0.5)%(24*60);
        int h=min/60;
        min%=60;
        h%=12;
        if(h==0)
            h=12;
        printf("%d %d %02d:%02d\n",k,m,h,min);
    }
    return 0;
}

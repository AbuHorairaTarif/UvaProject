#include <stdio.h>
int main()
{
    int h1,h2,m1,m2,m,h,t;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4) {
         {
            if(h2>h1)
            {
                t=((h2*60)+m2)-((h1*60)+m1);
                printf("%d\n",t);
            }
            else if(h1>h2)
            {
                t=60-(m1-m2);
                printf("%d\n",t);
            }
            else if(h1==h2)
            {
                t=1400-(m1-m2);
                printf("%d\n",t);
            }

        }
    }
}

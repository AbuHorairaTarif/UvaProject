#include <stdio.h>
int main(void)
{
    int t,a,b,c,i,j;
    while(scanf("%d",&t) !=EOF) {

        for(i=0;i<t;i++){
                scanf("%d%d%d",&a,&b,&c);{
        if((a>b && a<c) || (a>c && a<b))
            printf("Case %d: %d\n",i+1,a);


            else if((b>c && b<a) || (b>a && b<c))
                printf("Case %d: %d\n",i+1,b);

                else printf("Case %d: %d\n",i+1,c);
                }
    }

    }
return 0;
}


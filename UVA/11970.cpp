#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static int *cache;
static int *pcache;
int main()
{
    register int i,x,top;
    int n,c,cc;
    cache =(int*) malloc(1001*sizeof(int));
    pcache = (int*)malloc(31624*sizeof(int));
    for(i=0;i<31624;i++)
        pcache[i]=i*i;

    scanf("%d",&c);
    cc =1;
    while(cc<=c)
    {
        top = 1000;
        scanf("%d",&n);
        for(i=1;pcache[i]<n;i++)
        {
            x=n-pcache[i];
            if(x%i==0)
            {
                cache[top]=x;
                top--;
            }
        }
        printf("Case %d:",cc);
        for(i=top+1;i<1001;i++)
        {
            printf(" %d",cache[i]);
            cache[i]=0;
        }
        printf("\n");
        cc++;
    }
    return 0;
}

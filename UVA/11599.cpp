#include <stdio.h>
int main()
{
    int par,budget,H,W;

        while(scanf("%d %d %d %d",&par,&budget,&H,&W)==4){

        int cost=budget+1,i;
        while(H--)
        {
            int price,bed;
            scanf("%d",&price);
            for(i=1;i<=W;i++)
            {
                scanf("%d",&bed);
                if(bed>=par)
                {
                    if(cost>(par*price))
                        cost=par*price;
                }
            }

        }
        if(cost<budget)
            printf("%d\n",cost);
        else
            printf("stay home\n");
    }
    return 0;
}

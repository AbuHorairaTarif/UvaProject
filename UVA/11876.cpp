#include <stdio.h>
#define N 1021650
int nod[N];
int nnod[N];
int main()
{
    int i,j,hi,lo,tc,mid,a,b,cc=1,iter;
    for(i=0;i<N;i++)
        nod[i]=0;
    for(i=1;i<N;i++)
        for(j=i;j<N;j+=i)
            nod[j]++;
    nnod[0]=1;
    nod[0]=1;
    for(i=1;i<66000;i++)
        nnod[i]=nnod[i-1]+nod[nnod[i-1]];
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&i,&j);
        iter = 20;
        lo = 0;
        hi = 65999;
        while(iter--)
        {
            mid = (hi+lo)/2;
            if(nnod[mid]<i)
                lo = mid;
            else
                hi = mid;
        }
        a = hi;
        lo = 0;
        hi = 65999;
        iter = 20;
        while(iter--)
        {
            mid = (hi+lo)/2;
            if(nnod[mid]<=j)
                lo = mid;
            else
                hi = mid;
        }
        b = lo;
        printf("Case %d: %d\n",cc++,b-a+1);
    }
    return 0;
}

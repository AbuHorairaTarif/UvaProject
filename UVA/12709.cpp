#include <stdio.h>
int main()
{
    int T;
    while(scanf("%d",&T)&& T)
    {
        int L,W,H;
        int maxH=0,maxV=0;
        while(T--)
        {
            scanf("%d%d%d",&L,&W,&H);
            int v = L * W * H;
            if(H>maxH || (H==maxH && v>maxV))
            {
                maxH=H;
                maxV=v;
            }
        }
        printf("%d\n",maxV);
    }
    return 0;
}

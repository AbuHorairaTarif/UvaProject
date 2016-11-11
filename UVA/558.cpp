#include <stdio.h>
#define inf 1000000000
struct edge{
    int u, v, time;
}egs[2100];
int main()
{
    int n, e, i, j, k, t, dist[1100], neg, updated;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &e);
        for (i=0; i<n; i++) dist[i]=inf;
        for (i=0; i<e; i++)
        {
            scanf("%d%d%d", &egs[i].u, &egs[i].v, &egs[i].time);
        }
        neg=0;
        for (i=0; i<n; i++)
        {
            updated=0;
            for (j=0; j<e; j++)
            {
                if (dist[egs[j].u]+egs[j].time<dist[egs[j].v])
                    {
                        dist[egs[j].v]=dist[egs[j].u]+egs[j].time;
                        updated++;
                        if (i==n-1) {printf("possible\n"); neg++; break;}
                    }
            }
            if (updated==0) break;
        }
        if (neg==0) printf("not possible\n");
    }
return 0;
}

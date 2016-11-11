#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int L,C,r1,r2,d,t,tot;
    while(scanf("%d%d%d%d",&L,&C,&r1,&r2) && L && C && r1 && r2)
    {
        if(min(L,C)<max(r1,r2) * 2)
        {
            printf("N\n");
            continue;
        }
        tot=r1+r2;
        d=(L-tot)*(L-tot)+(C-tot)*(C-tot);
        t=tot*tot;
        if(t<=d)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int n,tab[105],tn,i,mi[105];
void table()
{
    int s=9;
    for(tn=1;;tn++)
    {
        tab[tn]=tab[tn-1]+s;
        if(tn%2==0) s*=10;
        if(tab[tn]==1999999998) break;
    }
    mi[0]=1;
    for(int i=1;i<=10;i++)
        mi[i]=mi[i-1]*10;
}
void f(int num)
{
    int ans[15],ansn=0;
    while(num)
    {
        ans[ansn++]=num%10;
        num/=10;
    }
    for(int i=0;i<ansn;i++)
        printf("%d",ans[i]);
    printf("\n");
}
int main()
{
    table();
    while(~scanf("%d",&n) && n)
    {
        for(i=1;i<=tn;i++)
        {
            if(n<=tab[i]) break;
        }
        int num=n-tab[i-1]+mi[(i-1)/2]-1;
        printf("%d",num);
        if(i==1)
        {
            printf("\n");
            continue;
        }
        if(i%2) num/=10;
        f(num);
    }
    return 0;
}

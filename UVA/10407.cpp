#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}
int main()
{
    while(true)
    {
        int i=-1,simple[1111],min;
        while(scanf("%d",&simple[++i])&&simple[i]);
        if(simple[0]==0)    return 0;
        min=simple[0];
        for(int j=1;j<i;j++)
            if(simple[j]<min)   min=simple[j];
        for(int j=0;j<i;j++)
            simple[j]-=min;

        int ans=gcd(simple[0],simple[1]);
        for(int j=2;j<i;j++)
            ans=gcd(ans,simple[j]);
        printf("%d\n",ans);
    }
}

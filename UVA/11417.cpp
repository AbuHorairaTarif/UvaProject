#include <stdio.h>
int GCD(int a,int b);
int main()
{
    int i,G=0,j,N;

    while(scanf("%d",&N)==1)
    {
        if(N==0) break;
        G=0;
        for(i=1;i<N;i++)
    for(j=i+1;j<=N;j++)
    {
        G+=GCD(i,j);

    }
printf("%d\n",G);

    }
return 0;
}
int GCD(int a,int b)
{
    int t;
    while(a!=0)
    {
        t=a;
        a=b%a;
        b=t;

    }
return b;
}

#include <stdio.h>
int L[35],U[35];
int main()

{
    int n;
    L[1]=U[1]=1;
    L[2]=U[2]=2;
    for(int i=3;i<35;i++)
    {
        U[i]=L[i-1]+L[i-2];
        L[i]=L[i-1]+U[i-1];
    }
    while(scanf("%d",&n),n)
    {
        printf("%d\n",(1<<n)-U[n]-L[n]);
    }
    return 0;
}

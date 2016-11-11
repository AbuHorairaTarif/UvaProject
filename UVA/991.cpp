#include <stdio.h>
int f[12];
int main()
{
    int n,nCase=0,i,j;
    f[0]=1;
    f[1]=1;
    f[2]=2;
    for(i=3;i<12;i++)
        for(j=0;j<i;j++)
        f[i]+=f[j]*f[i-1-j];
    while(scanf("%d",&n)!=EOF)
    {
        if(nCase++) printf("\n");
        printf("%d\n",f[n]);
    }
    return 0;
}

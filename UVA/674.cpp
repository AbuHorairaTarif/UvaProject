#include <stdio.h>
long int ways[7500];
void count()
{
    int coin[]={50,25,10,5,1};
    ways[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=coin[i];j<7500;j++)
            ways[j]+=ways[j-coin[i]];
    }
}
int main()
{
    count();
    int n;
    while(scanf("%d",&n)==1)
        printf("%ld\n",ways[n]);
    return 0;
}

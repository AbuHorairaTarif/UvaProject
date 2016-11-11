#include <stdio.h>

int mod(long int b,long int p,long int m);

int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3)
    {
        printf("%d\n",mod(b,p,m));
    }
}
int mod(long int b,long int p,long m)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    return (mod(b,p-1,m)*(b%m))%m;
}

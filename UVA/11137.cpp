#include <stdio.h>
int a[30];
long long int wk[10000];
void cube()
{
    int i;
    for(i=1;i<=21;i++)
        a[i]=i*i*i;
}
int countways()
{
    int i,j;
    wk[0]=1;
    for(i=1;i<22;i++)
    {
        for(j=1;j<=9999;j++)
        {
            if(a[i]<=j)
                wk[j]+=wk[j-a[i]];
        }
    }
}
int main()
{
    cube();
    countways();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",wk[n]);
    }
    return 0;
}

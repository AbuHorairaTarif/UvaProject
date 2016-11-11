#include <cstdio>
int a[16]={1,3},k=2;
int fun(int n);
int main()
{
    int n;
    while(scanf("%d",&n) && n!=-1)
    {
        if(n%2)
            printf("0\n");
        else
            printf("%d\n",fun(n/2));
    }
    return 0;
}
int fun(int n)
{
    int i;
    if(n<k)
        return a[n];
    for(i=k;i<=n;i++)
        a[i]=4*a[i-1]-a[i-2];
    return a[n];
}

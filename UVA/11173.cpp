#include <cstdio>
int main()
{
    int test,n,k;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&n,&k);
        printf("%d\n",k^(k>>1));
    }
    return 0;
}

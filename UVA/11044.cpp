#include <stdio.h>
int main()
{
    int test,n,m;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}

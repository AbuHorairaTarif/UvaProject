#include <stdio.h>
int main()
{
    int test,n,arr[20],pos,i,j=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        pos=(i/2);
        printf("Case %d: %d\n",j++,arr[pos]);
    }
return 0;
}

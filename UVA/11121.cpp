#include <iostream>
#include <cstdio>
#include <cstring>
const int base=-2;
using namespace std;
int main()
{
    int test,i,j,n,cases=0;
    scanf("%d",&test);
    while(test--)
    {
        int ans[100],k=0;
        memset(ans,0,sizeof ans);
        scanf("%d",&n);
        while(n)
        {
            ans[k++]=(n%2+2)%2;
            n=(n-ans[k-1])/base;
        }
        for(i=k;i>0;i--)
            if(ans[i])
            break;
        printf("Case #%d: ",++cases);
        while(i>=0)
            printf("%d",ans[i--]);
        printf("\n");
    }
    return 0;
}

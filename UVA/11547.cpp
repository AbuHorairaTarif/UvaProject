#include <stdio.h>
int main()
{
    int n,test,m;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&m);
        m=m*567;
        m=m/9;
        m=m+7492;
        m=m*235;
        m=m/47;
        m=m-498;
        m=m/10;
        m=m%10;
        if(m<0) m=m*(-1);
        printf("%d\n",m);

    }
    return 0;
}

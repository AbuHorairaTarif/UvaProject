#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j,t,test,kase=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);

        int count[200]={0};
        bool valid = true;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&t);
                count[t]++;
                if(count[t]>n)
                {
                    valid = false;
                }
            }
        }
        if(valid) printf("Case %d: yes\n",kase++);
        else printf("Case %d: no\n",kase++);
    }
    return 0;
}

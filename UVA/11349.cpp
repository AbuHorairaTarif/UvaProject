#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int i,j,k,n,m,d,test,t=0,a[105][105];
    char s1[10],s2[10];
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%s%s%lld",s1,s2,&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                scanf("%lld",&a[i][j]);
        }
        bool flag=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]<0 || (a[i][j]!=a[(n-i)+1][(n-j)+1]))
                {
                    flag=1;
                }
            }
        }
        if(!flag)
            printf("Test #%lld: Symmetric.\n",++t);
        else
            printf("Test #%lld: Non-symmetric.\n",++t);
    }
    return 0;
}

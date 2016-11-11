#include <cstdio>
#include <cstring>
using namespace std;
int test,n,a,b,ans,l;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        ans=0;
        for(int i=n-50;i<n;++i)
        {
            a=b=i;
            while(b)
            {
                a+=b%10;
                b/=10;
            }
            if(a+b == n)
            {
                ans =i;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

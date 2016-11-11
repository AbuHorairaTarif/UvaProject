#include <cstdio>
using namespace std;
int main()
{
    long long int f[48];
    f[0]=f[1]=1;
    for(int i=2;i<=47;++i)
        f[i]=f[i-1]+f[i-2];
    int test;
    long long int N,l,r;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld %lld %lld",&N,&l,&r);
        if(N>46) N-=(N-46)/2*2;
        for(long long int i=l;i<=r;++i)
        {
            long long int pos=i;
            int n=N;
            while(n>=2)
            {
                if(pos>=f[n-2])
                {
                    pos-=f[n-2];
                    --n;
                }
                else
                    n-=2;
            }
            putchar('0'+n);
        }
        putchar('\n');
    }
    return 0;
}

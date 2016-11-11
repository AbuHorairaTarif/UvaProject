#include <stdio.h>
int main()
{
    long long int n,count;
    while(scanf("%lld",&n)==1)
    {
        count=0;
        while(n!=0)
        {
            count++;
            if(n%2==0)
                n/=2;
            else
            {
                if((((n-1)/2)%2)==0 || (n==3))
                    n--;
                else
                    n++;
            }

        }
        printf("%lld\n",count);
    }
    return 0;
}

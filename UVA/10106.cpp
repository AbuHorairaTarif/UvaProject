#include <stdio.h>
int main()
{
    unsigned long long a,b,product;
    while (scanf("%llu%llu",&a,&b))
    {
        product=a*b;
        printf("%llu\n",product);
    }
    return 0;
}

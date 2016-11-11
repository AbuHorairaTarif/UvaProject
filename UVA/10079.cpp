#include <stdio.h>
int main()
{
    long int i,n;
    scanf("%ld",&n);
    while(n>-1)
    {
        n=(n*(n+1)/2)+1;
        printf("%ld\n",n);
        scanf("%ld",&n);

    }
    return 0;
}

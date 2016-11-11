#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    long int x=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%ld",&x);
        if(x%2!=0)
        {
            x--;
        }
        printf("%ld\n",x/2);
    }
    return 0;
}

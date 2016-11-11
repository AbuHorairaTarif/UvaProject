#include <stdio.h>
int main()
{
    long int a,b,c,*d,*e;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        d=&a;
        e=&b;
        if(*d>*e)
            printf("%ld\n",*d-*e);
        else
            printf("%ld\n",*e-*d);
    }
    return 0;
}

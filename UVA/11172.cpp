#include <stdio.h>
int main()
{
    long long int a,b,c,test,i;
    scanf("%lld",&test);
    for(i=0;i<test;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
    return 0;
}

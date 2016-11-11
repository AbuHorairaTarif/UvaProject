#include <stdio.h>
int main()
{
    long int a,b,c,test,i;
    scanf("%ld",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(((a+b) <=c) || (b+c)<=a || (c+a)<=b)
            printf("Case %ld: Invalid\n",i);
        else if(a==b && b==c)
            printf("Case %ld: Equilateral\n",i);
        else if(a==b || b==c || c==a)
            printf("Case %ld: Isosceles\n",i);
        else
            printf("Case %ld: Scalene\n",i);
    }
    return 0;
}

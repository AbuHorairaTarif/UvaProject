#include <stdio.h>

int main()
{
    long long int sum,cube=0,num,i,j;
    while(scanf("%lld",&num)!=EOF){
            cube=0;
    for(i=1;i<=num;i++)
    {
        cube+=i*i*i;
    }
    printf("%lld\n",cube);
}
return 0;
}

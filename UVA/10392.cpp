#include <stdio.h>
int main()
{
    long long int N,i,temp;
    while(scanf("%lld",&N) &&N>0)
    {
        temp=N;
        for(i=2;i<=1000000;i++)
        {
            while(temp%i==0){
                printf("    %lld\n",i);
                temp/=i;
            }
            if(temp==1)
                break;
        }
        if(temp!=1)
            printf("    %lld\n",temp);
        putchar('\n');
    }
    return 0;
}

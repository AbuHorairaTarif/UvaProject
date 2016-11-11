#include<stdio.h>
int GCD(long int a,long int b)
        {
            long int c;
            while(a!=0)
                {
                    c=b%a;
                    b=a;
                    a=c;
                }
            return(b);
        }
int main()
{
    long int a,b,N;

    while(scanf("%ld",&N)==1 && N!=0)
    {
        long int G=0;
        for(a=1;a<N;a++)
        for(b=a+1;b<=N;b++)
        {
            G+=GCD(a,b);
        }
        printf("%ld\n",G);
    }
    return(0);
}

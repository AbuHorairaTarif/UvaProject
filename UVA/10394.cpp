#include <stdio.h>
#include <math.h>
#define MAX 19000000
unsigned long long int list1[MAX],list2[MAX];
int prime[MAX];
void sieve_prime()
{
    int i,j,k,l,m,count=0;
    unsigned long long int t=0;
    unsigned long long int serial;
    for(i=2;i<=MAX;i++) prime[i]=1;
    k=2;
    for(m=2;m<=sqrt(MAX);m++)
    {
        for(j=k+k;j<=MAX;j=j+k)
        {
            prime[j]=0;
        }
        k++;
        for(;!prime[k];k++);
    }
    for(i=0;i<=MAX;i++)
    {
        if(prime[i])
        {
            if(prime[i+2])
            {
                list1[t]=i;
                list2[t]=i+2;
                t++;
            }
        }
    }
}
int main()
{
    sieve_prime();
    unsigned long long int serial;
    while(scanf("%llu",&serial)==1)
    {
        printf("(%llu, %llu)\n",list1[serial-1],list2[serial-1]);
    }
    return 0;
}

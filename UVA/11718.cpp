#include <stdio.h>
long int Power(long int x,long int n,long int mod)
{
    long int power=x;
    if(n==0) return 1;
    power=Power(power,n/2,mod);
    if(n&0x00001)
        return (x*((power*power)%mod))%mod;
    else return (power*power)%mod;
}
int main()
{
    long int i,j,t,n,mod,sum,input,k,power;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld",&n,&k,&mod);
        for(j=0,sum=0;j<n;j++)
        {
            scanf("%ld",&input);
            sum+=input;
        }
        sum%=mod;
        power=Power(n,k-1,mod);
        sum*=power;
        sum%=mod;
        sum*=k;
        sum%=mod;
        printf("Case %ld: %ld\n",i+1,sum);
    }
    return 0;
}

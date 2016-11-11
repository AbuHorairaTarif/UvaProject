#include <cstdio>
#include <ctype.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
void is_prime();
bool sev[1500+2];
int prime[250+2];
long long int count[2000002+2];
long long int save[2000002+2];
int main()
{
    is_prime();
    int test,a,b;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&a,&b);
        printf("%lld\n",count[b]-count[a-1]);
    }
    return 0;
}
void is_prime()
{
    int k=0;
    long long int sum;
    int num;
    int n=sqrt(1500);
    for(int i=3;i<n;i=i+2)
    {
        if(sev[i]==false)
        {
            for(int j=i*i;j<1500;j=j+(2*i))
            {
                sev[j]=true;
            }
        }
    }
    prime[k++]=2;
    for(int i=3;i<1500;i=i+2)
    {
        if(sev[i]==false)
            prime[k++]=i;
    }
    for(int i=1;i<2000002;i++)
    {
        num=sum=i;
        n=sqrt(i);
        for(int j=0;prime[j]<=n;j++)
        {
            if(num%prime[j]==0)
            {
                sum=(sum*(prime[j]-1))/prime[j];
                while(num%prime[j]==0)
                    num=num/prime[j];
            }
        }
        if(num!=1 && num==sum)
            sum--;
        else if(num!=1)
            sum=(sum*(num-1))/num;
        save[i]=sum;
    }
    count[1]=count[2]=1;
    for(int i=3;i<2000002;i++)
    {
        count[i]=count[save[i]]+1;
    }
    for(int i=1;i<2000002;i++)
        count[i]=count[i]+count[i-1];
}

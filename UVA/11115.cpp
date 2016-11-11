#include <bits/stdc++.h>
using namespace std;
long long int d,n,ans,bignum[100],tmp,l,carry,j,cur,i;
int main()
{
    while(scanf("%lld %lld",&n,&d),n||d)
    {
        memset(bignum,0,sizeof(bignum));
        tmp=n,l=0;
        if(!d)
        {
            tmp=1;
        }
        while(tmp)
        {
            bignum[l++]=tmp%10;
            tmp/=10;
    }
    if(d) d--;
    while(d)
    {
        carry=0;
        for(j=0;j<l;j++)
        {
            cur=bignum[j]*n+carry;
            bignum[j]=cur%10;
            carry=cur/10;
        }
        while(carry)
        {
            bignum[j++]=carry%10;
            carry/=10;
        }
        l=j;
        d--;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%lld",bignum[i]);
    }
    printf("\n");
}
return 0;
}

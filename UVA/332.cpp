#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;
long long gcd(long long int a,long long int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
    int k,cas=1;
    char s[20];
    while(scanf("%d",&k) && k!=-1)
    {
        scanf(" %s",s);
        int i,j,len=strlen(s);
        long long int ans_a=1e20,ans_b;
        long long int a,b,aa,bb,t;
        {
            a=1;
            b=0;
            for(j=2;j<len-k;j++)
            {
                a*=10;
                b=b*10+s[j]-'0';
            }
            aa=0;
            bb=0;
            for(j=len-k;j<len;j++)
            {
                aa=aa*10+9;
                bb=bb*10+s[j]-'0';
            }
            if(aa)
            {
                aa*=a;
                b=b*aa+bb*a;
                a=aa*a;
            }
            t=1;
            if(b)
                t=gcd(a,b);
            a/=t;
            b/=t;
            if(a<ans_a)
            {
                ans_a=a;
                ans_b=b;
            }
        }
        if(ans_b==0)
            ans_a=1;
        printf("Case %d: %lld/%lld\n",cas++,ans_b,ans_a);
    }
    return 0;
}

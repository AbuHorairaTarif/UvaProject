#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    long long int n,i,sum,num,b;
    char s[1000];
    while(gets(s))
    {
        sum=0;
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            num=s[i]-'0';
            b=num*(pow(2,n-i)-1);
            sum=sum+b;
        }
        if(sum==0) break;
        printf("%lld\n",sum);
    }
    return 0;
}

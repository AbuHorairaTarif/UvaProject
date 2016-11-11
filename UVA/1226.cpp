#include <stdio.h>
#include <string.h>
int main()
{
    char str[2000];
    long int i,j,n,num,len,t;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %s",&n,str);
        num=0;
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            num=num*10+str[j]-'0';
            num%=n;
        }
        printf("%ld\n",num);
    }
    return 0;
}

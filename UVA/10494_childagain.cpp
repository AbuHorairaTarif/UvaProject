#include <stdio.h>
int main()
{
    long long int fir,sec,ans,test;
    char ch;
    while(scanf("%lld %c %lld",&fir,&ch,&sec) !=EOF)
    {
        switch(ch)
        {
            case '/':
                ans=fir/sec;
                printf("%lld\n",ans);
                break;
            case '%':
                ans=fir%sec;
                printf("%lld\n",ans);
                break;
                    default:
                    break;
        }
    }
    return 0;

}

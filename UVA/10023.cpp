#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int test,i,j;
    long long int num=0,rt;
    char s[1000],rad;
    while(1){
    scanf("%d",&test);
    printf("\n");
    getchar();
    while(test--)
    {
        num=0;
    gets(s);
    printf("\n");
    for(i=0;i<strlen(s);i++)
    {
        num=num*10+s[i]-'0';
        rt=sqrt(num);
    }
    printf("%lld\n\n",rt);
}
}
return 0;
}

#include <stdio.h>
int main()
{
    double n1,n2,result;
    char input[1000],ch[3];
    while(gets(input))
    {
        sscanf(input,"%lf%s%lf",&n1,ch,&n2);
        printf("%s\n",input);
        if(n1>2147483647)
        printf("first number too big\n");
        if(n2>2147483647)
        printf("second number too big\n");
        if(ch[0]=='+')
        result=n1+n2;
        else
        result=n1*n2;
        if(result>2147483647)
        printf("result too big\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdio.h>
int main()
{
    char ques[100],sign,res[10];
    int con,a,b,r,c,ca=0;

    while(scanf("%d%c%d=%s",&a,&sign,&b,res)==4)
    {
        con=atoi(res);
        switch(sign)
        {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        }
        if(r==con)ca++;
    }
    printf("%d\n",ca);
    return 0;
}

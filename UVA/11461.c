#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,c,i,count;
    while(scanf("%d %d", &num1, &num2))
    {
        if(num1==0&&num2==0)
        break;
        count=0;
        for(i=num1;i<=num2;i++)
        {
           c=sqrt(i);
           if(c*c==i)
           count++;
        }
        printf("%d\n", count);
    }
return 0;
}

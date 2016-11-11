#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,i;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0) break;
        else if(c==sqrt(a*a+b*b)|| b==sqrt(a*a+c*c)|| a==sqrt(b*b+c*c))
            printf("right\n");
        else
        printf("wrong\n");
    }
    return 0;
}

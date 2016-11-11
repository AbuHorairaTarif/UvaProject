#include<stdio.h>
int main()
{
    int a,b,dollar,test,earn,i;
    scanf("%d",&test);
            for(i=0;i<test;i++)
        {
           scanf("%d%d%d",&a,&b,&dollar);
           earn=dollar*(a+(a-b))/(a+b);
           if(earn<=0)
           printf("0\n");
           else
           printf("%d\n",earn);
        }
    return 0;
}

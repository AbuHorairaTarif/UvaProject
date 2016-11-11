#include<stdio.h>
int main()
{
long int a,b,c,test,i;

while(scanf("%ld",&test)==1)
{
    for(i=0;i<test;i++) {
    scanf("%ld%ld%ld",&a,&b,&c);

if(a+b<=c || b+c<=a || a+c<=b)
printf("Wrong!!\n");
else
printf("OK\n");
}
}
return 0;
}

#include <stdio.h>
int main()
{
    long int a,b,c,test,i=1;
    while(scanf("%ld",&test) ==1) {
        if(test>0 || test<20) {
    while(i<=test){
            scanf("%ld%ld%ld",&a,&b,&c);
    if((a+b)<=c || (b+c)<=a || (c+a)<=b)
        printf("Case %ld: Invalid\n",i);
        else if(a<=0 || b<=0 || c<=0)
        printf("Case %ld: Invalid\n",i);
        else if((a==b)&&(b==c))
        printf("Case %ld: Equilateral\n",i);
        else if(a==b||b==c||c==a)
        printf("Case %ld: Isosceles\n",i);
        else
        printf("Case %ld: Scalene\n",i);
        i++;

    }
        }
}
return 0;
}

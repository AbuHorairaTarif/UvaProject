#include <stdio.h>

int main()
{
    long long int a,b,n,test,i,rev1=0,rev2=0,rev_fin=0,add;
    scanf("%lld",&test);
    while(test--){
            rev1=0,rev2=0,rev_fin=0;
    scanf("%lld %lld",&a,&b);
    while(a!=0 )
    {
        rev1=rev1*10;
        rev1=rev1+a%10;
        a=a/10;

    }
    while(b!=0){
        rev2=rev2*10;
        rev2=rev2+b%10;
        b=b/10;
    }

    add=rev1+rev2;
    while(add!=0)
    {
        rev_fin=rev_fin*10;
        rev_fin=rev_fin+add%10;
        add=add/10;
    }
    printf("%lld\n",rev_fin);
}
return 0;
}

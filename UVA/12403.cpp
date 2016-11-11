#include <stdio.h>
#include <string.h>

int main()
{
    char ch[50];

    long long int test,i,j,sum=0;
    scanf("%lld",&test);

    for(i=0;i<test;i++){
    scanf("%s",&ch);
    if(strcmp(ch,"report")==0)printf("%lld\n",sum);
    else if(strcmp(ch,"donate")==0){
    scanf("%lld",&j);
    sum=sum+j;
    }
    }
return 0;
}

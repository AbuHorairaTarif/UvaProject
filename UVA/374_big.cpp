#include <stdio.h>

int bigmod(long long int b, long long int p, long long int m) {
if (p==0) return 1;
else if (p%2==0) return (bigmod((b%m*b%m)%m, p/2, m));
else return (b*bigmod(b, p-1, m))%m;
}

int main(){
long long int b , p , m;
while(scanf("%lld %lld %lld",&b,&p,&m)==3){
printf("%d\n",bigmod(b,p,m));
}
return 0;
}

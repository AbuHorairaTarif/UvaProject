#include <stdio.h>

int calculate(int x) {
 if (x/10==0) return(x);
 int sum=0;
 while (x>0)
 {
  sum+=(x%10);
  x/=10;
 }
 return(calculate(sum));
}

int main() {
 int n;

 while (scanf("%d",&n)==1)
 {
     if(n==0) break;
  printf("%d\n",calculate(n));

 }
 return 0;
}


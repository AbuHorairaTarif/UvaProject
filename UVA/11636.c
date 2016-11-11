#include <stdio.h>
int main()
{
    long int count,paste,n,i;
    i=1;
    while(scanf("%ld",&n)!=EOF)
 {
    count=1;paste=0;
    if(n<1)
    break;
    else if(n==1)
    paste=0;
    else
  {
   while(1)
   {
    count*=2;
    if(count>=n)
     {
      paste++;break;
     }
    else
     paste++;
   }
  }
  printf("Case %ld: %ld\n",i++,paste);
 }
 return 0;
}

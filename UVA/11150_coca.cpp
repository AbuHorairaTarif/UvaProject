#include<stdio.h>
int main()
{
int drink,n;
while(scanf("%d",&n)!=EOF)
{
drink=n;
while(n>=3)
{
drink=drink+(n/3);
n=(n/3)+(n%3);
}
if(n==2)
{
drink++;
}
printf("%d\n",drink);
}
return 0;
}


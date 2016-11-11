#include <stdio.h>
int main()
{
int dd1,mm1,yy1,dd2,mm2,yy2,dif,i,j,t;
while(scanf("%d",&t)==1)
{
for(i=1;i<=t;i++)
{
scanf("%d/%d/%d",&dd1, &mm1, &yy1);
scanf("%d/%d/%d",&dd2, &mm2, &yy2);
dif=(yy1-yy2);
if(mm1<mm2)
dif--;
else if(mm1==mm2)
{
if(dd1<dd2)
dif--;
}
if(dif<0)
printf("Case #%d: Invalid birth date\n", i );
else if(dif>130)
printf("Case #%d: Check birth date\n", i);
else
printf("Case #%d: %d\n",i,dif);
}
}
return 0;
}

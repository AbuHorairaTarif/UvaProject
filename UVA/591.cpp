#include<stdio.h>
int main()
{
int n,i,a[1000],term=1,sum,move,avg;
while(scanf("%d",&n)==1 && n!=0)
{
sum=0;
move=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];

avg=sum/n;
}
for(i=0;i<n;i++)
    if(a[i]>avg)
        move=move+(a[i]-avg);
printf("Set #%d\nThe minimum number of moves is %d.\n\n",term++,move);

}
return 0;
}

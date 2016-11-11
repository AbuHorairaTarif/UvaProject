#include <stdio.h>
#include <math.h>
# define pi 2*acos(0.0)
int main()
{
double r,n,area;
while(scanf("%lf %lf", &r, &n) != EOF) {
if(r<0 || n<=2) {
break;
}
else
{
area=((n*r*r*sin((2*pi)/n))/2);
}
printf("%0.3lf\n", area);
}
return 0;
}

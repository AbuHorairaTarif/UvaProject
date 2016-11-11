#include<stdio.h>
#include<math.h>
int main()
{
long int r;
double num,root;
scanf("%lf",&num);
while(num>0)
    {
        r=sqrt(num);
        root=pow(r,2);

    if(root==num)
    printf("yes\n");
    else
    printf("no\n");
    scanf("%lf",&num);
    }
return 0;
}


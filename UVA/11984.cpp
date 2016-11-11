#include <stdio.h>
int main()
{
    int c,f,i=1,j,test;
    double temp;
    scanf("%d",&test);
    while(test--)
    {
        temp=0;
        scanf("%d %d",&c,&f);
        temp= (5*f)/9.0+c;
        printf("Case %d: %.2lf\n",i++,temp);
    }
    return 0;
}

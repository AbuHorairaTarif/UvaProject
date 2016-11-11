#include <stdio.h>
int main()
{
    int i,test;
    double c,f,c_new,f_pre;
    while(scanf("%d",&test)==1)
    for(i=1;i<=test;i++)
    {
        scanf("%lf%lf",&c,&f);
        f_pre=(9*c)/5.0+f;
        c_new=(5*f_pre)/9.0;
        printf("Case %d: %.2lf\n",i,c_new);

    }
    return 0;
}

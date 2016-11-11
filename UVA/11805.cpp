#include<stdio.h>
int main()
{
    int n,k,p,test,rem,pos,fin,i=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d",&n,&k,&p);
        pos=k+p;
        fin = pos%n;
        // clock system follow
        if(fin==0)
        {
            fin=n;
        }

        printf("Case %d: %d\n",i++,fin);
    }
    return 0;
}

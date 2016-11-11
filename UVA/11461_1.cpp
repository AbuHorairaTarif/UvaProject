#include <stdio.h>
#include <math.h>
int main()

{
    int a,b,c,sq,count,i;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0) break;
        else {
                count=0;
            for(i=a;i<=b;i++)
            {
                c=sqrt(i);
                if(c*c==i)
                    count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}


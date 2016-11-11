#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,flag=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(flag) puts("");
        flag=1;
        int t=0;
        double r=n-0.5,r1,r2;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            if(i*i+j*j<r*r) t++;
        printf("In the case n = %d, %d cells contain segments of the circle.\n",n,n*8-4);
        printf("There are %d cells completely contained in the circle.\n",t*4);
    }
    return 0;
}

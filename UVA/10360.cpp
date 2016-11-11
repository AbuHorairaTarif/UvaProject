#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int grid[1025][1025];
int main()
{
    int t,i,d,p,x,y,j,s,k,l,max,xBest,yBest,xStart,yStart;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        max=0;
        xBest=0;
        yBest=0;

        scanf("%d %d",&d,&p);
        for(j=0;j<p;j++)
        {
            scanf("%d %d %d",&x,&y,&s);
            xStart=x-d;
            yStart=y-d;
            if(x-d<0)
                xStart=0;
            if(y-d<0)
                yStart=0;
            for(k=xStart;k<=d + x &&k <1025;k++)
                for(l=yStart;l<=d + y && l<1025;l++)
                grid[k][l]+=s;
        }
        for(k=0;k<1025;k++)
        {
            for(l=0;l<1025;l++)
            {
                if(grid[k][l]>max)
                {
                    max=grid[k][l];
                    yBest=l;
                    xBest=k;
                }
                grid[k][l]=0;
            }
        }
        printf("%d %d %d\n",xBest,yBest,max);
    }
    return 0;
}

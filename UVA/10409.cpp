#include <cstdio>
#include <string.h>

int main()
{
    int N;
    char side[10];
    int north,south,east,west,top,bottom,tempBottom,tempTop;
    while((scanf("%d",&N)==1)&&N>0)
    {
        top=1;
        bottom=6;
        east=4;
        west=3;
        north=2;
        south=5;
        while(N--)
        {
            scanf("%s",&side);
            if(strcmp(side,"north")==0)
            {
                tempBottom = bottom;
                tempTop =top;
                top=south;
                bottom = north;
                south = tempBottom;
                north = tempTop;
            }

            else if(strcmp(side,"south")==0)
            {
                tempBottom =bottom;
                tempTop = top;
                top = north;
                bottom = south;
                south = tempTop;
                north = tempBottom;
            }

            else if(strcmp(side,"east")==0)
            {
                tempBottom = bottom;
                tempTop = top;
                top = west;
                bottom = east;
                west = tempBottom;
                east = tempTop;
            }

            else if(strcmp(side,"west")==0)
            {
                tempBottom = bottom;
                tempTop = top;
                top = east;
                bottom = west;
                east = tempBottom;
                west = tempTop;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}

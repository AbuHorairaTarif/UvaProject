#include <stdio.h>
#include <math.h>

int main()
{
    int x=0,y=0,score=0;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==-1 && y==-1)
            break;
        score=abs(y-x);
        if(score>50)
            score=100-score;
        printf("%d\n",score);
    }
    return 0;
}

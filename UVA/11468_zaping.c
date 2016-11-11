#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,score=0;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;

        score=abs(b-a);
        if(score>50)
            score=100-score;
        printf("%d\n",score);
    }
return 0;
}


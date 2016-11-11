#include <stdio.h>
int main()
{
    int x,y,i;
    int cases;
    int min_steps=0;
    scanf("%d",&cases);

    while(cases--)
    {
        scanf("%d%d",&x,&y);
        int dif=y-x;
        min_steps=0;

        if(dif!=0)
        {
            int sumSteps=0;
            int z=2;

            while(dif>sumSteps)
            {
                sumSteps+=(z/2);
                min_steps++;
                z++;

            }

        }
        printf("%d\n",min_steps);
    }
    return 0;
}

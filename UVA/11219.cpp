#include <stdio.h>
int main()
{
    int test,m1,m2,d1,d2,y1,y2,y,i=1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        y=y1-y2;
        if(m1<m2)
            y--;
            else if(m1==m2)
            {
        if(d1<d2)
            y--;
            }
        if(y<0)
            printf("Case #%d: Invalid birth date\n",i++);
        else if(y>130)
            printf("Case #%d: Check birth date\n",i++);
        else
            printf("Case #%d: %d\n",i++,y);
    }
    return 0;
}

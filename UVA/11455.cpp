#include <stdio.h>
int main()
{
    int test,side1,side2,side3,side4;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d %d",&side1,&side2,&side3,&side4);
        if(side1==side2 && side2==side3 && side3==side4)
            printf("square\n");
        else if(side1==side3 && side2==side4 || side1==side2 && side3==side4 || side1==side4 && side3==side2)
            printf("rectangle\n");
        else if(side1<=(side2+side3+side4) && side2<=(side1+side3+side4) && side3<=(side1+side2+side4) && side4<=(side1+side2+side3))
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}

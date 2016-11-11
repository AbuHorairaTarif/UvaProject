#include <stdio.h>
int main()
{
    int number,i,temp;
    scanf("%d",&number);
    if(number<0)
    {
        printf("%d = -1 x ",number);
        number=number*-1;
    }
    else printf("%d = ",number);
    for(i=2;i*i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d x ",i);
            number=number/i;
            temp=i;
            i=1;
        }
    }
    printf("%d\n",number);
    return 0;
}

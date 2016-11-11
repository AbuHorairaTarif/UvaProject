#include <stdio.h>
int main()
{
    int i,l,j,k,num;
    for(i=0;i<=1500;i++)
    {
        if((i%2==0 || i%3==0 || i%5==0))
            printf("%d\t",i);
    }
}

#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n%6!=0)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}

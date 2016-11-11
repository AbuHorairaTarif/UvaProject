#include <stdio.h>
int main()
{
    int i,j,k,n;

    while(scanf("%d",&k)) {
    for(n=0;n<k;n++)    {
        {
        scanf("%d%d",&i,&j);
        if(i>j)
            printf(">\n");
        else if(i<j)
            printf("<\n");
        else
            printf("=\n");

        }

    }
    break;
    }

    return 0;
}

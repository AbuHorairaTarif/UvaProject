#include <stdio.h>
int main()
{
    int n, i, j,k,cube_diff;

    while (scanf("%d", &cube_diff)==1)
    {   if(cube_diff==0)
            break;
        k=0;
        for(i=1; i<60; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(cube_diff==(i*i*i-j*j*j))
                {
                    k=1;
                    break;
                }
            }
            if(k==1)
            break;
        }
       if(k==1) printf("%d %d\n",i, j);
       else
        printf("No solution\n");
    }
    return 0;
}

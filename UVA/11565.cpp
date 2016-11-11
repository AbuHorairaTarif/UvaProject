#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x,y,z,A,B,C;
        scanf("%d %d %d",&A,&B,&C);
        bool flag =true;
        for(x=-100;x<=100 && flag;x++)
            for(y=-100;y<=100 && flag;y++)
            for(z=-100;z<=100 && flag;z++)
        {
            if(x==y || x==z || y==z) continue;
            else if(x*x+y*y+z*z==C && x*y*z == B && x+y+z==A)
            {
                flag=false;
                printf("%d %d %d\n",x,y,z);
            }
        }
        if(flag)
            puts("No solution.");

    }
}

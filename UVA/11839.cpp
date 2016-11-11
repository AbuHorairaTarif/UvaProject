#include <stdio.h>
int main()
{
    int n,a[5],t=0,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        while(n--)
        {
            t=0;
            for(i=0;i<5;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]<=127) t++;
            }
            if(t==1)
            {
                if(a[0]<128) printf("A\n");
                else if(a[1]<128) printf("B\n");
                else if(a[2]<128) printf("C\n");
                else if(a[3]<128) printf("D\n");
                else printf("E\n");
            }
            else
                printf("*\n");
        }
    }
    return 0;
}

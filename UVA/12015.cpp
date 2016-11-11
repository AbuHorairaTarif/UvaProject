#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100];
    int n,k[100],max,p,t=1;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%s%d",a,&k[0]);
            scanf("%s%d",b,&k[1]);
            scanf("%s%d",c,&k[2]);
            scanf("%s%d",d,&k[3]);
            scanf("%s%d",e,&k[4]);
            scanf("%s%d",f,&k[5]);
            scanf("%s%d",g,&k[6]);
            scanf("%s%d",h,&k[7]);
            scanf("%s%d",i,&k[8]);
            scanf("%s%d",j,&k[9]);
            max=0;
            for(p=0;p<10;p++)
            {
                if(k[p]>max)
                    max=k[p];
            }
            printf("Case #%d:\n",t++);
            for(p=0;p<10;p++)
            {
                if(k[p]==max)
                {
                    if(p==0)
                        puts(a);
                   else if(p==1)
                        puts(b);
                   else if(p==2)
                        puts(c);
                   else if(p==3)
                        puts(d);
                   else if(p==4)
                        puts(e);
                   else if(p==5)
                        puts(f);
                   else if(p==6)
                        puts(g);
                   else if(p==7)
                        puts(h);
                   else if(p==8)
                        puts(i);
                   else if(p==9)
                        puts(j);
                }
            }
        }
    }
    return 0;
}

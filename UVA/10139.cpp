#include <stdio.h>
#include <math.h>
int p[1000][2];
int main()
{
    int n,m,i;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int top=0,x=sqrt(m),M=m;
        for(i=2;i<=x;i++)
        {
            if(m%i==0)
            {
                p[top][0]=i;
                p[top][1]=0;
                while(m%i==0)
                {
                    p[top][1]++;
                    m/=i;
                }
                top++;
            }
        }
        if(m>x)
        {
            p[top][0]=m;
            p[top++][1]=1;
        }
        int found=0;
        for(i=0;i<top;i++)
        {
            int temp=n,count=0;
            while(temp!=0)
            {
                temp/=p[i][0];
                count+=temp;
            }
            if(count<p[i][1])
            {
                found=1;
                break;
            }
        }
        if(found)
            printf("%d does not divide %d!\n",M,n);
        else
            printf("%d divides %d!\n",M,n);
    }
    return 0;
}

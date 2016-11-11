#include <stdio.h>
int a[20000][2];
int dely(int x,int y)
{
    if((x*y)%(y-x)==0)
        return (x*y)/(y-x);
    else
        return 0;
}

int main()
{
    int num,sum,i,z,j;
    while(scanf("%d",&num)!=EOF)
    {
        sum=0;
        j=1;
        for(i=num+1;i<=2*num;i++)
        {
            z=dely(num,i);
            if(z!=0)
            {
                sum++;
                a[j][0]=z;
                a[j][1]=i;
                j++;
            }
        }
        printf("%d\n",sum);
        for(i=1;i<=sum;i++)
            printf("1/%d = 1/%d + 1/%d\n",num,a[i][0],a[i][1]);
    }
    return 0;
}

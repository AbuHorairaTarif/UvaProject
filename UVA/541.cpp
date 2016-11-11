#include<stdio.h>
int main()
{
    int mat[100][100];
    register int i,j,n,re,ce,sum,r,c;

    while(scanf("%d",&n)&&n)
    {
        re=ce=0;
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                scanf("%d",&mat[i][j]);
                sum=sum+mat[i][j];
            }
            if(sum&1)re++,r=i;
        }
        for(j=1;j<=n;j++)
        {
            sum=0;
            for(i=1;i<=n;i++)
                sum=sum+mat[i][j];
            if(sum&1)ce++,c=j;
        }
        if(!(re|ce))
            printf("OK\n");
        else if(re==1&&ce==1)
            printf("Change bit (%d,%d)\n",r,c);
        else
            printf("Corrupt\n");
    }
    return 0;
}

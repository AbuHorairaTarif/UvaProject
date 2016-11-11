#include <stdio.h>
int main()
{
    int test,fre,hw,amp,i,j,k,m,n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&amp,&fre);
        scanf("%d",&fre);
        for(n=0;n<fre;n++){
        for(i=1;i<=amp;i++)
        {
            for(j=1;j<=i;j++)
            printf("%d",i);
            printf("\n");
            if(i==amp)
            {
                for(k=amp-1;k>0;k--){
                for(m=k;m>0;m--)
                    printf("%d",k);
                printf("\n");
                }
            }
        }
printf("\n");
    }
}
return 0;
}

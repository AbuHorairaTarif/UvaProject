#include <stdio.h>
int main()
{
    int t=0,s,sum,ans,i,j;
    while(scanf("%d",&s)==1 && s!=0)
    {
        ans=-1;
        t++;
        printf("Case %d: ",t);
        if(s==1) printf("%d\n",s);
        else
            {
                for(i=s-1;i>=1;i--)
                {
                    sum=i;
                    for(j=1;j<=i/2;j++)
                    {
                        if(i%j==0)
                        {
                            sum+=j;
                        }

                    }
                    if(sum==s)
                        {
                            ans=i;
                            break;
                        }
                }
                printf("%d\n",ans);
        }
    }
    return 0;
}

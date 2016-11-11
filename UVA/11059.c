#include<stdio.h>
int main()
{
      long long int a[1000],n,i,j,k,max,positive,test=1;
      while(scanf("%lld",&n)!=EOF)
      {
            max=0;
            for(i=0;i<n;i++)
            {
                  scanf("%lld",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                  for(j=i;j<n;j++)
                  {
                        positive=1;
                        for(k=i;k<=j;k++)
                        {
                              positive=positive*a[k];
                        }
                        if(positive>max) max=positive;
                        if(positive==0) break;
                  }
            }
            printf("Case #%lld: The maximum product is %lld.\n\n",test++,max);
      }
      return 0;
}

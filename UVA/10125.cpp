#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
int find(int x,int a[])
{
    int mid,low,high;
    low=0;high=n-1;
    while(low<=high)
    {
       mid=(low+high)/2;
       if(x>a[mid])
       low=mid+1;
       else if(x<a[mid])
       high=mid-1;
       else {
             //printf("L=%d %d\n",low,mid);
             return mid;
       }


    }
    return -1;
}
int main()
{
    int i,j,k,t;
    int a[1100];
    while(scanf("%d",&n),n)
    {
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       sort(a,a+n);
       /*for(i=0;i<n;i++)
       printf("%d ",a[i]);
       printf("\n");*/
       for(i=n-1;i>=0;i--)
       {
           for(j=n-1;j>=0;j--)
           {
                if(i==j)
                continue;
                for(k=n-1;k>=0;k--)
                {
                  if(i==k||j==k)
                  continue;
                  //printf("%d!",find(0,a));
                  t=find(a[i]-a[j]-a[k],a);
                  if(t!=-1)
                  if(t!=i&&j!=t&&k!=t)
                  {
                     printf("%d\n",a[i]);
                     break;
                  }
                }
                if(k!=-1)
                break;
           }
           if(j!=-1)
           break;
       }
       if(i==-1)
       {
           printf("no solution\n");
       }
    }
    return 0;
}

#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    long int t,n,a[20005],cas=1;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(int i=1;i<n;i++)
            scanf("%ld",&a[i]);
        long int max_sum=0,current_sum=0,start_=1,stp1,stp2,cnt=0,mcnt=0;
        for(int i=1;i<n;i++)
        {
            current_sum+=a[i];
            cnt++;
            if(current_sum<0)
            {
                cnt=0;
                current_sum=0;
                start_=i+1;
            }
            else if(current_sum>max_sum)
            {
                max_sum=current_sum;
                mcnt=cnt;
                stp1=start_;
                stp2=i+1;
            }
            else if(current_sum==max_sum && cnt>mcnt)
            {
                mcnt=cnt;
                stp1=start_;
                stp2=i+1;
            }
        }
        if(mcnt!=0)

            printf("The nicest part of route %ld is between stops %ld and %ld\n",cas++,stp1,stp2);
            else
                printf("Route %ld has no nice parts\n",cas++);
    }
    return 0;
}

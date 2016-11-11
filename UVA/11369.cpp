#include <cstdio>
#include <algorithm>
using namespace std;
long int arr[20010];
int main()
{
    int i,j,t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        long int sum=0;

        for(i=n-3;i>=0;i=i-3)
        {
            sum+=arr[i];
        }
        printf("%ld\n",sum);
    }
    return 0;
}

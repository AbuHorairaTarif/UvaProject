#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        long long int n,a[1001],sum=0;
        float avg,count=0,ans;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>avg)
                count++;
        }
        ans=float(count*100)/n;
        printf("%.3f%%\n",ans);
    }
    return 0;
}

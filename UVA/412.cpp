#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define N 51
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,arr[N],i,j;
    double all,up;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        all=(n*(n-1))/2;
        up=0;
        sort(arr,arr+n);
        for(i=n-1;i>=0;i--)
            for(j=i-1;j>=0;j--)
            if(gcd(arr[i],arr[j])==1)
            up++;
        if(up==0)
            printf("No estimate for this data set.\n");
        else
            printf("%.6f\n",sqrt((6*all)/up));
    }
    return 0;
}

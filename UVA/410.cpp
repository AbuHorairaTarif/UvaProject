#include <bits/stdc++.h>
using namespace std;
int arr[110];
int main()
{
    int c,s;
    int cas=0;
    while(scanf("%d%d",&c,&s)!=EOF)
    {
        int sum=0;
        double res=0;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        sort(arr,arr+2*c);
        printf("Set #%d\n",++cas);
        for(int i=0;i<c;i++)
        {
            res+=abs(c*arr[i]+c*arr[2*c-i-1]-sum);
            printf(" %d:",i);
            if(arr[i])printf(" %d",arr[i]);
            if(arr[2*c-i-1])printf(" %d",arr[2*c-i-1]);
            printf("\n");
        }
        printf("IMBALANCE = %.5lf\n\n",res/c);
    }
    return 0;
}

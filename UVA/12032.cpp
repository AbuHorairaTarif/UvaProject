#include <iostream>
#include <stdio.h>
using namespace std;

int arr[100000+10];
int main()
{
    int testCase;
    scanf("%d",&testCase);
    int cases=0;
    while(testCase--)
    {
        int n;
        scanf("%d",&n);
        arr[0]=0;
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        int maxi =-2147483647;
        for(int i=1;i<=n;i++)
        {
            int diff=arr[i]-arr[i-1];
            if(diff>maxi) maxi=diff;
        }
        int res=maxi;
        for(int i=1;i<=n;i++) {
            int diff=arr[i]-arr[i-1];
            if(diff==maxi) maxi--;
            else if (diff>maxi)
            {
                res++;
                break;
            }

        }
        printf("Case %d: %d\n",++cases,res);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n,i=0;
    int arr[77];
    arr[1]=1;
    arr[2]=arr[3]=2;
    for(i=4;i<77;i++)
    {
        arr[i]=arr[i-2]+arr[i-3];
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",arr[n]);
    }
    return 0;
}

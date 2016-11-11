#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int order[25],nums[25],len[25];
int main()
{
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>order[i];
    while(scanf("%d",&temp)!=EOF)
    {
        nums[temp-1]=order[0];
        for(int i=1;i<n;i++)
        {
            scanf("%d",&temp);
            nums[temp-1]=order[i];
        }
        memset(len,0,sizeof(len));
        len[0]=1;
        int mx=1;
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
        {
            if(len[i]==0)
                len[i]=1;
            if(nums[j]<nums[i] && len[j]+1>len[i])
            len[i]=len[j]+1;
            if(len[i]>mx)
                mx=len[i];
        }
        cout<<mx<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=0;i<n;++i)
            cin>>a[i];
        int ans=1;
        int sum=0;
        for(int i=0;i<n-1;++i)
            if(sum+a[i]<a[i+1])
        {
            sum +=a[i];
            ++ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}

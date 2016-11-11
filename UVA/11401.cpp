#include<iostream>
using namespace std;

int main()
{
    long long int n,ans;
    while(cin>>n){
        if(n==0||n<3)
          break;
        else{
            if(n%2==0)
            ans= (n*(n-2)*((2*n)-5))/24;
        else
            ans=((n-1)*(n-3)*((2*n)-1))/24;
        cout<<ans<<endl;
        }
    }
    return 0;
}

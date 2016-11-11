#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cs=0;
    while(cin>>n && n)
    {
        int i;
        long long int sum=0;
        for(i=1;;i++)
        {
            if(3*i>=n) break;
            sum+=(n-3*i-1)/2;
        }
        cout<<"Case "<<++cs<<": ";
        cout<<sum<<endl;
    }
    return 0;
}

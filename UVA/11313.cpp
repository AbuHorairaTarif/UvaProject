#include <iostream>
using namespace std;
int main()
{
    int n,m,ncase;
    cin>>ncase;
    while(ncase--)
    {
        cin>>n>>m;
        int cnt=0;
        while(n>=m)
        {
            cnt += n/m;
            n= n/m + n%m;
        }
        if(n==1)
            cout<<cnt<<endl;
        else
            cout<<"cannot do this"<<endl;
    }
    return 0;
}

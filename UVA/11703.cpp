#include <iostream>
#include <cmath>
using namespace std;
int x[1000*1000];

void solve()
{
    x[0]=1;
    for(int m=1;m<=1000*1000;m++)
    {
        int k1=m-sqrt(m);
        int k2=log(m);
        int k3=m*sin(m)*sin(m);
        x[m]=x[k1]+x[k2]+x[k3];
        x[m]%=1000*1000;
    }
}

int main()
{
    solve();
    int m;
    while(cin>>m)
    {
        if(m==-1)
            return 0;
        cout<<x[m]<<endl;
    }
    return 0;
}

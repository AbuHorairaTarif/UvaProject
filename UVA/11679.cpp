#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int account[20],b,n,c,d,v;
    while(cin>>b>>n)
    {
        if(!b && !n) break;
        for(int i=1;i<=b;i++)
            cin>>account[i];

        for(int i=1;i<=n;i++)
        {
            cin>>d>>c>>v;
            account[d]-=v;
            account[c]+=v;
        }
        bool chk=true;

        for(int i=1;i<=b;i++)
            if(account[i]<0)
        {
            chk=false;
            break;
        }
        if(chk)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}

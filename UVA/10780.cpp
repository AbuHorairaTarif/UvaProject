#include <iostream>
#include <cstring>
using namespace std;
int getsum(int n,int x)
{
    int ans=0;
    while(n)
    {
        ans+=n/x;
        n/=x;
    }
    return ans;
}
int main(int argc,char *argv[])
{
    int n,m,i,j,t,c=1,temp,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        i=2;
        ans=1000000;
        while(m>1)
        {
            a=0;
            while(m%i==0)
            {
                a++;
                m/=i;
            }
            if(a)
            {
                temp=getsum(n,i)/a;
                if(ans>temp)
                    ans=temp;
            }
            i++;
        }
        cout<<"Case "<<c++<<":"<<endl;
        if(ans)
            cout<<ans<<endl;
        else cout<<"Impossible to divide"<<endl;
    }
    return 0;
}

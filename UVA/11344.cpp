#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;
bool f(string a,int u)
{
    long long int k=0;
    for(int i=0;a[i]!='\0';i++)
    {
        int l=(int)(a[i]-48);
        k=k*10+l;
        k%=u;
    }
    if(k==0)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    cin>>number;
    while(number--)
    {
        string a;
        cin>>a;
        int n;
        bool b=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            if(b)
            {
                b=f(a,p);
            }
        }
        if(b)
            cout<<a<<" - Wonderful."<<endl;
        else
            cout<<a<<" - Simple."<<endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int n,d,a,c,t,fact[21];
    string s,b;
    cin>>t;
    fact[0]=1;
    for(int i=1;i<=20;i++)
    {
        fact[i]=fact[i-1]*i;
    }
    while(t--)
    {
        cin>>s>>n;
        sort(s.begin(),s.end());
        c=s.length();
        a=c;
        b="";
        while(a)
        {
            d=(int)(n/fact[a-1]);
            b+=s[d];
            s.erase(s.begin()+d);
            n -=d*fact[a-1];
            a--;
        }
        cout<<b<<endl;
    }
    return 0;
}

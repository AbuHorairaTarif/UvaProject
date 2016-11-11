
#include <bits/stdc++.h>
#define ll long
ll fib[91];

int main()
{
    __;
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<92;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    ll n,pn;
    vector<int> res;
    while(cin>>n)
    {
        res.clear();
        pn=n;
        bool flag = true,pre=false;
        for(int i=90;i>0;i--)
        {
            if(flag&&n<fib[i]) continue;
            else flag=false;
            if(n<fib[i]||pre) pre=false;
            else
            {
                n-=fib[i];
                pre=true;
                res.psb(i);
            }
        }
        cout<<pn<<"\n";
        for(int i=0;i<SZ(res);i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<SZ(res);i++)
        {
            cout<<fib[res[i]]<<" ";
        }
        cout<<"\n";
        cout<<"\n";
    }
    return 0;
}


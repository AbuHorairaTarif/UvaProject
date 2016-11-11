#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,w,n,i,j,x,y,sum,rst;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>w>>n;
        sum=rst=0;
        for(j=0;j<n;j++)
        {
            cin>>x>>y;
            sum+=y;
            if(sum>=w)
            {
                rst+=2*x;
                if(sum>w)
                    sum=y;
                else
                    sum=0;
            }
        }
        if(sum)
            rst+=2*x;
        cout<<rst<<endl;
    }
    return 0;
}

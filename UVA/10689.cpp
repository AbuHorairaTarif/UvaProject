#include <iostream>
#include <cmath>
using namespace std;
int tbl[15000];
int main()
{
    int a,b,n,m,tc,i;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>n>>m;
        tbl[0]=a,tbl[1]=b;
        for(i=2;i<15000;i++)
        {
            tbl[i]=tbl[i-1]+tbl[i-2];
            tbl[i]%=10000;
        }
        int base = 1;
        for(i=0;i<m;i++)
            base*=10;
        cout<<tbl[n%15000]%base<<endl;
    }
    return 0;
}

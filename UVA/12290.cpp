#include <iostream>
#include <cstdio>
using namespace std;
bool trust(int n)
{
    int tmp=n;
    if(tmp%7==0)
        return true;
    while(tmp)
    {
        if(tmp%10==7)
            return true;
        tmp=tmp/10;
    }
    return false;
}

int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        if(n==0 && m==0 && k==0)
            break;
        int cont=0,cur=1;
        bool bla=true;
        for(int i=1;true;i++)
        {
            if(m==cur && trust(i))
                cont++;
            if(cont==k)
            {
                cout<<i<<endl;
                break;
            }
            if(cur==n)
                bla=false;
            if(cur==1)
                bla=true;
            if(bla)
                cur++;
            else
                cur--;
        }
    }
    return 0;
}

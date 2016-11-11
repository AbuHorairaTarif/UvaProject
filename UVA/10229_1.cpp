#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;

long long MOD;

struct A{
    long long arr[5][5];
};


A MatrixMulti(A a, A b)
{
    A result;
    int i,j,k;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            result.arr[i][j]=0;
            for(k=0;k<2;k++)
                result.arr[i][j]+=(a.arr[i][k]*b.arr[k][j]);
            result.arr[i][j]=result.arr[i][j]%MOD;
        }

    return result;
}

A BigMod(A a, long long n)
{
    A ret;
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            {
                if(i==j)
                ret.arr[i][j]=1;
                else
                ret.arr[i][j]=0;
            }

    while(n)
    {
        if(n & 1)
        {
            ret=MatrixMulti(ret,a);
        }
        a=MatrixMulti(a,a);
        n>>=1;
    }
    return ret;
}

int main()
{
    A initialMatrix,ans;
    long long n,m,i,j;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            initialMatrix.arr[i][j]=1;

    initialMatrix.arr[0][0]=0;
    while(cin>>n)
    {
        cin>>m;
        MOD=pow(2,m);

            if(n==0)
            {
                cout<<"0"<<endl;
                continue;
            }
            if(n==1)
            {
                if(m==0)
                cout<<"0"<<endl;
                else
                cout<<"1"<<endl;
                continue;
            }

            ans=BigMod(initialMatrix,n-1);

            cout<<ans.arr[1][1]%MOD<<endl;
    }
return 0;
}

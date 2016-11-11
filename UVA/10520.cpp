#include <iostream>
using namespace std;
long long int mat[22][22];
int a;
long long int f(int b,int c)
{
    if(mat[b][c] != 0)
        return mat[b][c];
    else
    {
        long long int h=0,k=0;
        if(b>=c)
        {
            if(b<a)
            {
                for(int i=b+1;i<=a;i++)
                {
                    long long int u = f(i,1)+f(i,c);
                    if(u>h)
                        h=u;
                }
            }
            else if(b==a)
            {
                h=0;
            }
            if(c>0)
            {
                for(int i=1;i<c;i++)
                {
                    long long int y = f(b,i)+f(a,i);
                    if(y>k)
                        k=y;
                }
            }
            else if(c==0)
            {
                k=0;
            }
            return mat[b][c]=h+k;
        }
        else
        {
            long long int o=0;
            for(int i=b;i<c;i++)
            {
                long long int t=f(b,i)+f(i+1,c);
                if(t>o)
                    o=t;
            }
            return mat[b][c]=o;
        }
    }
}
int main()
{
    int b;
    while(cin>>a>>b)
    {
        mat[a][1]=b;
        cout<<f(1,a)<<endl;
        for(int i=0;i<22;i++)
            for(int j=0;j<22;j++)
            mat[i][j]=0;
    }
    return 0;
}

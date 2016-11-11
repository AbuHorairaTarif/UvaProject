#include <iostream>
#include <string>
#include <vector>
using namespace std;
int tc,sz,res,sum;
string str;
vector <string> v;
bool b;
int main()
{
    cin>>tc;
    cin.ignore();
    getline(cin,str);
    while(tc--)
    {
        v.clear();
        while(getline(cin,str) && str != "")
            v.push_back(str);
        sz=v.size();
        res =0;
        for(int I=0;I<sz;++I)
            for(int J=0;J<sz;++J)
            for(int K=I;K<sz;++K)
            for(int L=J;L<sz;++L)
        {
            sum=0;
            b=true;
            for(int M=I;M<=K && b;++M)
                for(int N=J;N<=L && b ; ++N)
                if(v[M][N]=='1')
                sum++;
            else
                b=false;
            if(b)
                res=max(res,sum);
        }
        cout<<res<<endl;
        if(tc)cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string str;
    cin>>str;
    while(str[0]!='E')
    {
        int n=str.size();
        int k=1;
        if(n==1 && str[0]=='1')
            cout<<1<<endl;
        else
            {
                while(n>1)
                {
                    n=(int) floor(log10(double(n))) + 1;
                    k++;
                }
                cout<<k+1<<endl;
            }
            cin>>str;
    }
    return 0;
}

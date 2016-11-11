#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a,b,c;
    int tst,len;
    string str;
    cin>>tst;
    while(tst--)
    {
        cin>>str;
        len=str.size();
        if(str=="1" || str=="4" || str=="78")
        {
            cout<<"+\n";
            continue;
        }
        if(str[len-2]=='3' && str[len-1]=='5')
        {
            cout<<"-\n";
            continue;
        }
        if(str[0]=='9' && str[len-1]=='4')
        {
            cout<<"*\n";
            continue;
        }
        if(str.find("190")==0)
        {
            cout<<"?\n";
            continue;
        }
    }
    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <stack>
using namespace std;
int flag,sum;
int build(int x)
{
    bool sub_empty=true;
    char c;
    cin>>c;
    int d;
    if(cin>>d)
    {
        sub_empty=false;
        int left=build(x+d);
        int right=build(x+d);

        if(left && right)
        {
            if(sum == x+d)
                flag=true;
        }
    }
    else {
        cin.clear();
    }
    cin>>c;
    return sub_empty;
}
int main()
{
    while(cin>>sum)
    {
        flag=false;
        build(0);
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

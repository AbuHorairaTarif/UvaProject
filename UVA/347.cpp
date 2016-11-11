#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cstring>
using namespace std;
int ind,t,mark,car,sz,sum;
string str;
bool b;

void PlusPlus()
{
    car=1;
    for(int i=str.length()-1;i>=0 && car;--i)
    {
        sum=(str[i]-'0')+car;
        str[i]='0'+(sum%10);
        car=sum/10;
    }
    if(car)
    {
        string s(1,'0'+car);
        str=s+str;
    }
}
int main()
{
    t=0;
    while(cin>>str && str!="0")
    {
        while(1)
        {
            b=true;
            mark=0;
            sz=str.length();
            for(int i=0;i<sz;++i)
                if(mark & (1 << (str[i]-'0')))
            {
                b=false;
                break;
            }
            else mark |= (1 << (str[i]-'0'));
            if(!b)
            {
                PlusPlus();
                continue;
            }
            mark=ind=0;
            while(!(mark & (1 << ind)))
            {
                mark |= (1 << ind);
                ind+= (str[ind]-'0');
                ind %= sz;
            }
            if(!ind && mark == (1 << sz)-1)
            {
                printf("Case %d: ",++t);
                cout<<str<<endl;
                break;
            }
            else
            {
                PlusPlus();
                continue;
            }
        }
    }
    return 0;
}

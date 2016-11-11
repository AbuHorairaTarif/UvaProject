#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define fill(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9


int main()
{
    string s1,s2;
    bool check,conti;
    long long base1,base2,power,i,sum1,sum2,reminder;
    vector<char>result;
    vector<char> :: iterator it;
    while(cin>>base1>>base2>>s1)
    {
        if(s1=="0")
        {
            cout<<"0 base "<<base1<<" = 0 base "<<base2<<endl;
            continue;
        }
        conti=false;
        sum1=0;
        power=0;
        for(i=s1.length()-1;i>=0;i--)
                    {
                        if(s1[i]>47 && s1[i]<58)
                        {
                            sum1+=(s1[i]-48)*pow(base1,power++);
                            if(s1[i]-48>=base1)
                            conti=true;

                        }

                        else
                        {
                            sum1+=(s1[i]-55)*pow(base1,power++);
                            if(s1[i]-55>=base1)
                            conti=true;
                        }
                    }
        if(conti)
        {
            cout<<s1<<" is an illegal base "<<base1<<" number"<<endl;
            continue;
        }

        while(sum1){
            reminder=sum1%base2;
            if(reminder>9)

            result.PB(reminder+55);
            else
            result.PB(reminder+48);
            sum1/=base2;
        }

        cout<<s1<<" base "<<base1<<" = ";
        for(it=result.end()-1;it>=result.begin();it--)
        cout<<*it;
        cout<<" base "<<base2<<endl;
        result.clear();

        }

return 0;
}

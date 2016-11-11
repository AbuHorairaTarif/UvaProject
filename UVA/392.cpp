#include<iostream>
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

using namespace std;

int main()
{
long long a[100],i,chk;
bool c;
map<long long,string>nt;
nt[1]="x^8";
nt[2]="x^7";
nt[3]="x^6";
nt[4]="x^5";
nt[5]="x^4";
nt[6]="x^3";
nt[7]="x^2";
nt[8]="x";
while(cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9])
    {
    c=true;
    for(i=1;i<=9;i++)
        if(a[i]!=0) c=false;
    if(c==true) {
                cout<<"0"<<endl;
                continue;
                }
    chk=0;
    for(i=1;i<=9;i++)
        {
        if(a[i]!=0){
                   if(chk==0){
                             chk=1;
                             if(a[i]<0) cout<<"-";
                             if(i==9) cout<<abs(a[i]);
                             else if (a[i]==1 || a[i]==-1) cout<<nt[i];
                             else cout<<abs(a[i])<<nt[i];
                             }
                   else {
                        if(a[i]>0)cout<<" + ";
                        else  cout<<" - ";
                        if(i==9) cout<<abs(a[i]);
                        else if(a[i]==1 || a[i]==-1) cout<<nt[i];
                        else cout<<abs(a[i])<<nt[i];
                        }
                   }
        }
    cout<<endl;
    }
return 0;
}

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    int n,m,i,j,k,ca=0;
    string s,t;
    while(getline(cin,s))
    {
        if(s[0]=='*') break;
        istringstream is(s);
        is>>t;
        char c=t[0];
        if(c>='A' && c<='Z') c=c-'A'+'a';
        bool ok=1;
        while(is>>t)
        {
            char cc=t[0];
            if(cc>='A' && cc<='Z')
                cc=cc-'A'+'a';
            if(cc!=c)
            {
                ok=0;
                break;
            }
        }
        if(ok) puts("Y");
        else puts("N");
    }
    return 0;
}

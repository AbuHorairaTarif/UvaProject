#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int m,d,y;
int f(string s)
{
    if(s=="Jan") return 1;
    if(s=="Feb") return 2;
    if(s=="Mar") return 3;
    if(s=="Apr") return 4;
    if(s=="May") return 5;
    if(s=="Jun") return 6;
    if(s=="Jul") return 7;
    if(s=="Aug") return 8;
    if(s=="Sep") return 9;
    if(s=="Oct") return 10;
    if(s=="Nov") return 11;
    if(s=="Dec") return 12;
}

int gao(int k)
{
    int r=0;
    r=k/4;
    r-=k/100;
    r+=k/400;
    return r;
}

int main()
{
    int T,cases=1;
    string s;
    int a,b;
    cin>>T;
    while(T--)
    {
        cin>>s;
        scanf("%d, %d",&d,&y);
        m=f(s.substr(0,3));
        if(m<2 || (m==2 && d<=29)) y--;
        a=gao(y);
        cin>>s;
        scanf("%d, %d",&d, &y);
        m=f(s.substr(0,3));
        if(m<2 || (m==2 && d<29))
            y--;
        b=gao(y);

        printf("Case %d: %d\n",cases++,b-a);
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int g,mn=11,mx=0;
    string r;
    while(~scanf("%d",&g)&&g)
    {
        getchar();
        getline(cin,r);
        if(r=="too high") mn=min(mn,g);
        else if(r=="too low") mx=max(mx,g);
        else
        {
            if(mx<g&&g<mn) puts("Stan may be honest");
            else puts("Stan is dishonest");
                mn=11;
            mx=0;
        }
    }
    return 0;
}

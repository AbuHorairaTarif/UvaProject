#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int base,d,f,t,c,cnt;
    while(scanf("%d %d %d",&base,&d,&f)==3)
    {
        for(cnt=1,c=0,t=d;;)
        {
            t=(t*f)+c;
            c=t/base;
            t=t%base;
            if(c||t !=d)
                ++cnt;
            else
                break;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

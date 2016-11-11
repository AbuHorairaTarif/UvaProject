#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c,d,e,p,q,r,s,t;
    while(cin>>a>>b>>c>>d>>e>>p>>q>>r>>s>>t)
    {
        if(((a==0&&p==1)||(a==1&&p==0))&&((b==0&&q==1)||(b==1&&q==0))&&((c==0&&r==1)||(c==1&&r==0))&&((d==0&&s==1)||(d==1&&s==0))&&((e==0&&t==1)||(e==1&&t==0)))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}

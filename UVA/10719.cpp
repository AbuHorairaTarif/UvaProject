#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
using namespace std;
long long int q[10010];
int main()
{
    long long int k,a;
    char c;
    while(scanf("%lld",&k)!=EOF)
    {
        memset(q,0,sizeof(q));
        int h=1,i;
        while(scanf("%lld%c",&a,&c))
        {
            q[h]=a+q[h-1]*k;
            h++;
            if(c=='\n')
                break;
        }
        cout<<"q(x):";
        for(i=1;i<h-1;i++)
            cout<<" "<<q[i];
            cout<<endl;
        cout<<"r = "<<q[i]<<endl<<endl;
    }
    return 0;
}

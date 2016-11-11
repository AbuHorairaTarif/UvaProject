#include <iostream>
#include <cmath>
#include <cstdio>
#include <string.h>
using namespace std;

int a[10010];
int main()
{
    int i,j,num,z,l,m,temp,t,counter;
    int testCase=1;
    while(cin>>z>>i>>m>>l)
    {
        memset(a,0,sizeof(a));
        if(z==0 && i==0 && m==0 && l==0)
            break;
        temp=1;
        counter=0;
        t=l;
        for(;;)
        {
            t=(z*l+i)%m;
            a[t]+=1;
            if(a[t]==2)
                break;
            l=t;
            counter++;
        }
        printf("Case %d: %d\n",testCase++,counter);
    }
    return 0;
}

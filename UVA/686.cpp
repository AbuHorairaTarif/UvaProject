#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool Isp(int n)
{
    int i,j;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int l =sqrt(n);

    for(i=3;i<=l;i+=2)
    {
     if(n%i==0)
            return 0;
    }
    return 1;
}


int main()
{
    int a,b,i,m,n,c;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        a=0,b=0,c=0;
        for(i=n-1;i>=n/2;i--)
        {
            if(Isp(i))
            {
                m=n-i;
                if(Isp(m))
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

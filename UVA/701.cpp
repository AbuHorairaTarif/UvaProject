#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int begin=1,a,b;
        double max,min;
        max=log2(n+1);
        min=log2(n);
        double t=log2(10.0);
        while(n)
        {
            begin++;
            n/=10;
        }
        for(int i=begin;;i++)
        {
            a=(int)(min+i*t);
            b=(int)(max+i*t);
            if(b>a)
            {
                printf("%d\n",b);
                break;
            }
            else if(i==100000)
            {
                printf("no power of 2\n");
                break;
            }
        }
    }
    return 0;
}

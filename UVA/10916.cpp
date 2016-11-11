#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int year,i;
    while(scanf("%d",&year) && year)
    {
        double sum=0;
        int byte=4;
        int k=(year-1960)/10;
        while(k--)
        {
            byte*=2;
        }
        double max=byte*log(2.0);
        for(i=1;;i++)
        {
            sum+=log(i);
            if(sum>max)
                break;
        }
        printf("%d\n",i-1);
    }
    return 0;
}

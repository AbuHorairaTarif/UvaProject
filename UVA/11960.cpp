#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int divis[1000002];
int apa[1000002];
int N;
int main()
{
    for(int i=1;i<=1000000;i++)
    {
        for(int j=i;j<=1000000;j+=i)
        {
            divis[j]++;
        }
    }

    for(int i=1;i<=1000000;i++)
    {
        if(divis[i]<divis[i-1])
        {
            apa[i]=apa[i-1];
            divis[i]=divis[i-1];
        }
        else
            apa[i]=i;
    }
    scanf("%d",&N);
    while(N--)
    {
        int X;
        scanf("%d",&X);
        printf("%d\n",apa[X]);
    }
    return 0;
}

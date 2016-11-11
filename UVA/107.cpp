#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;
int getN(int H,int x)
{
    int low=1,high=x;
    int mid=(low+high)/2;
    int N;
    while(low<=high)
    {
        mid=(low+high)/2;
        double part1=log10(H)*log10(mid);
        double part2=log10(mid+1)*log10(x);
        if(fabs(part1-part2)<1e-10)
        {
            N=mid;
            break;
        }
        else if(part2>part1)
            low=mid+1;
        else
            high=mid-1;
    }
    return N;
}
int main()
{
    int H,x,N,T,SumHeight;
    while(true)
    {
        scanf("%d%d",&H,&x);
        if(H==0 && x==0)
            break;
        N=getN(H,x);
        T=floor(log10(H)/log10(N+1)+1e-9);
        int SumHeight=0;
        int nLazy=0;
        int nNum=1;
        for(int i=0;i<=T;i++)
        {
            SumHeight+=nNum*H;
            nLazy+=nNum;
            nNum*=N;
            H/=(N+1);
        }
        printf("%d %d\n",nLazy-x,SumHeight);
    }
    return 0;
}

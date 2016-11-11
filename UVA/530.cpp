#include <stdio.h>
#include <algorithm>
using namespace std;

double permutation(int n,int r)
{
    int i,k;
    double num;
    if(r==0) return 1;
    k=min(r,n-r);
    num=1;
    for(i=k;i>=1;i--)
    {
        num=num*(n-i+1);
        num=num/i;
    }
    return num;
}


int main()
{
    int n,r;
    double g;
    while(scanf("%d%d",&n,&r)==2)
    {
        if(n==0 && r==0) break;
        g=permutation(n,r);
        printf("%.0lf\n",g);
    }
}

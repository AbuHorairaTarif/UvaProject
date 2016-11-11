#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int T,x,k,p,q;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&x,&k);
        q=x%k;
        p=k-q;
        printf("%d %d\n",p,q);
    }
    return 0;
}

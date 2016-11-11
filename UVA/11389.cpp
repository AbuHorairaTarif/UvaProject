#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    int n,d,r,i,j,cost,temp;
    while(scanf("%d%d%d",&n,&d,&r)==3)
    {
        if(n==0 && d==0 && r==0)
        break;
        int mor[150];
        int eve[150];

        for(i=0;i<n;i++)
        scanf("%d",&mor[i]);
        sort(mor,mor+n);

        for(i=0;i<n;i++)
        scanf("%d",&eve[i]);
        sort(eve,eve+n);
        cost=0;
        for(i=0;i<n;i++)
        {
            temp=mor[i]+eve[n-i-1];
            if(temp>d)
            cost=cost+(temp-d);
        }
        printf("%d\n",r*cost);
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int m,n;
    while(scanf("%d",&m)&&m){
        scanf("%d",&n);
        int front[m],rear[n];
        double temp[m*n], max_spread=0;
        int i=0,j=0,k=0;
        for(;i<m;i++)
        scanf("%d",&front[i]);
        for(;j<n;j++)
        scanf("%d",&rear[j]);
        for( i=0;i<m;i++)
            for(j=0;j<n;j++){
                temp[k++]=(rear[j]*1.0/front[i]);

            }
        sort(temp,temp+k);
        for(i=1;i<k;i++){
            max_spread=max(max_spread,temp[i]/temp[i-1]);
        }
        printf("%.2lf\n",max_spread);
    }
return 0;
}

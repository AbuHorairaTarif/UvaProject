#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#define N 1000000

using namespace std;
bool mark[N];
vector <int> list;

struct node {
    int mu;
    int M;
}a[N];
void sieve()
{
    memset(mark,true,N);
    mark[0]=mark[1]=false;
    for(int i=4;i<N;i+=2)
        mark[i]=false;
    for(int i=3;i*i<=N;i+=2)
    {
        if(mark[i]) {
            for(int j=i*i;j<N;j+=2*i)
                mark[j]=false;
        }
    }
    list.clear();
    list.push_back(2);

    for(int i=3;i<N;i+=2)
    {
        if(mark[i])
            list.push_back(i);
    }
}

int main()
{
    sieve();
    a[0].mu = a[0].M=1;
    for(int i=2;i<=N;i++)
    {
        int length=(int)sqrt(i);
        int save = i;
        int index = 0;
        int count =0;
        int square =0;

        while(list[index]<=length)
        {
            while(save%list[index]==0)
            {
                count++;
                save/=list[index];
                square++;
            }
            if(square>1)
            {
                a[i-1].mu=0;
                break;
            }
            square=0;
            index++;
        }
        if(save>1)
            count++;
        if(square<2)
        {
            if(count%2)
            {
                a[i-1].mu=-1;
            }
            else
                a[i-1].mu=1;
        }
    }
    for(int i=1;i<N;i++)
        a[i].M+=(a[i-1].M+a[i].mu);
    int n;
    while(scanf("%d",&n) &&n)
    {
        printf("%8d%8d%8d\n",n,a[n -1].mu,a[n-1].M);
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
using namespace std;
int main()
{
    int N,t,k;
    while(cin>>N && N)
    {
        vector<int> inp;
        for(int i=0;i<N;i++)
        {
            cin>>t;
            inp.push_back(t);
        }
        cin>>k;
        vector<int> res;
        res.push_back(inp[inp.size()-1]);
        for(int i=0;i<N-1;i++)
        {
            for(int j=N-1;j>i;j--)
            {
                inp[j]=inp[j]-inp[j-1];
            }
            res.push_back(inp[N-1]);
        }
        for(int j=0;j<k;j++)
        {
            for(int i=res.size()-2;i>=0;i--)
            {
                res[i]=res[i]+res[i+1];
            }
        }
        printf("Term %d of the sequence is %d\n",N+k,res[0]);
    }
    return 0;
}

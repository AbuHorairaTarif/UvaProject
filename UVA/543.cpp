#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

bool pr[1000000]={false};
void generatePrime()
{
    pr[1]=true;
    pr[0]=true;
    int r=1000000;
    for(int i=2;i<r;i++)
    {
        if(!pr[i]) {
            for(int j=2;i*j<r;j++) {
                pr[i*j]=true;
            }
        }
    }
}

int main()
{
    generatePrime();
    int N,i;
    bool found;
    while(cin>>N)
    {
        if(!N) break;
        found=false;
        i=N;
        while(!found)
        {
            if(!pr[i])
            {
                if(!pr[N-i])
                {
                    found=true;
                    continue;
                }
            }
            if(i+2<N/2 || i==1) break;
            i--;
        }
        if(found)
        {
            cout<<N<<" = "<<N-i<<" + "<<i<<endl;
        }
        else
        {
            cout<<"Goldbach's conjecture is wrong.\n";
        }
    }
    return 0;
}

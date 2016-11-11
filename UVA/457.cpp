#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int dna[10];
int d[55][45];
int main()
{
    int n;
    while(cin>>n)
    {
        getchar();
        while(n--)
        {
            memset(d,0,sizeof(d));
            memset(dna,0,sizeof(dna));
            for(int i=0;i<=9;i++)
                cin>>dna[i];
            getchar();
            d[0][19]=1;
            for(int j=0;j<=49;j++)
            {
                for(int t=0;t<=39;t++)
                {
                    int k;
                    if(t==0)
                        k=d[j][t]+d[j][t+1];
                    else if(t==39) k=d[j][t]+d[j][t-1];
                    else k=d[j][t-1]+d[j][t]+d[j][t+1];
                    d[j+1][t]=dna[k];
                }
            }
            for(int j=0;j<=49;j++)
            {
                for(int t=0;t<=39;t++)
                {
                    if(d[j][t]==0) cout<<" ";
                    if(d[j][t]==1) cout<<".";
                    if(d[j][t]==2) cout<<"x";
                    if(d[j][t]==3) cout<<"W";
                }
                cout<<endl;
            }
            if(n) cout<<endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,k;
    while(cin>>n>>m)
    {
        int score=0,cnt=0,a[10000];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[j];
            }
            for(k=1;k<=m;k++)
            {
                if(a[k]>=1)
                {
                    score++;
                }
            }
            if(score==m)
            {
                cnt++;
                score=0;
            }
            score=0;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

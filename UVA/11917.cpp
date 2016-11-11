#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    long long x,a,n,i,d,e,f,j,count=1;
    string y,b;
    cin>>f;
    for(j=0;j<f;j++)
    {
        map<string,long long > m;
        cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>y>>x;
        m[y]=x;
        }

        cin>>a>>b;
        d=m[b];
        if(d==0)
        {
            printf("Case %lld: Do your own homework!\n",count);
        }
        else
        {
            if(a>=d)
            {
                printf("Case %lld: Yesss\n",count);
            }
            else
            {
                e=a+5;
                if(e>=d)
                {
                    printf("Case %lld: Late\n",count);
                }
                else if(d>e)
                {
                    printf("Case %lld: Do your own homework!\n",count);
                }
            }

        }
        count++;

    }
    return 0;
}

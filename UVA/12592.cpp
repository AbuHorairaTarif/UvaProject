#include <stdio.h>
#include <queue>
#include <map>
#include <vector>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string a[110],b[110],r;
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        getline(cin,a[i]);
        getline(cin,b[i]);
    }
    int k;
    cin>>k;
    getchar();
    while(k--)
    {
        getline(cin,r);
        for(int i=1;i<=n;i++)
        {
            if(a[i]==r)
            {
                cout<<b[i]<<endl;
                break;
            }
        }
    }
    return 0;
}

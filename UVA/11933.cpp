#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a[2];
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int cnt=0;
        a[0]=a[1]=0;
        for(int i=0;i<31;i++)
        {
            if((1 << i)&n)
            {
                a[cnt & 1] |=1 << i;
                cnt++;
            }
        }
        cout<<a[0]<<' '<<a[1]<<endl;
    }
    return 0;
}

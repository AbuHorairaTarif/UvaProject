#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int> data;
map<int,int>cnt;
void pre_cal_cube()
{
    for(int i=1;i*i*i<=1000102000;i++)
    {
        for(int j=i+1;;j++)
        {
            int sum=i*i*i+j*j*j;
            if(sum <= 1000102000)
            {
                cnt[sum]++;
                if(cnt[sum]==2)
                    data.push_back(sum);
            }
            else break;
        }
    }
    sort(data.begin(),data.end());
}
int main()
{
    pre_cal_cube();
    int l,rng;
    while(cin>>l>>rng)
    {
        int u=l+rng;
        bool flag=false;
        for(int i=0;i<data.size();i++)
        {
            if(data[i]>=l && data[i]<=u)
            {
                flag=true;
                cout<<data[i]<<endl;
            }
            if(data[i]>u)
                break;
        }
        if(!flag)
            cout<<"None\n";
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
struct stu
{
    int seq;
    int money;
};
int main()
{
    queue<stu>q;
    int n,k;
    while(cin>>n>>k,n!=0 || k!=0)
    {
        int cur=1;
        for(int i=1;i<=n;i++)
        {
            stu s;
            s.seq=i;
            s.money=cur;
            q.push(s);

            cur=cur%k+1;
        }
        int store=cur;
        while(!q.empty())
        {
            stu s=q.front();
            q.pop();
            if(s.money+store>=40)
            {
                printf("%3d",s.seq);
                store=s.money+store-40;
            }
            else
            {
                s.money+=store;
                store=0;
                q.push(s);
            }
            if(!store)
            {
                cur=cur%k+1;
                store=cur;
            }
        }
        cout<<endl;
    }
    return 0;
}

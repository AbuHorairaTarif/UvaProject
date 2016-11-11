#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int mx=0,cnt;
    string s,res;
    while(cin>>s)
    {
        if(s=="E-N-D") break;
        cnt=0;
        int sl=s.size();
        for(int i=0;i<sl;i++)
            if(isalpha(s[i])|| s[i]=='-')
            cnt++;
        if(cnt>mx)
        {
            res=s;
            mx=cnt;
        }
    }
    int rl=res.size();
    for(int i=0;i<rl;i++)
        if(isalpha(res[i])||res[i]=='-')
    {
        if(res[i]>='A' && res[i]<='Z') res[i]=res[i]-'A'+'a';
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}

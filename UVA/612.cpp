#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#include <cstdlib>
using namespace std;

int inv(string str);

int main(int argc,const char * argv[])
{
    int t,n,m;
    string tmp;
    vector<pair<int,int> >store;
    vector<string>dna;
    cin>>t;
    while(t--)
    {
        store.clear();
        cin>>n>>m;
        while(m--)
        {
            cin>>tmp;
            dna.push_back(tmp);
            store.push_back(pair<int,int>(inv(tmp),(int)dna.size()-1));
        }

        sort(store.begin(),store.end());
        for(int i=0;i<store.size();i++)
        {
            cout<<dna[store[i].second]<<endl;
        }
        if(t)
            cout<<endl;

    }
}
int inv(string str)
    {
        int result=0;
        for(int i=0;i<str.size()-1;i++)
        {
            for(int j=i+1;j<str.size();j++)
            {
                if(str[i]>str[j])
                {
                    result++;
                }
            }
        }
return result;
    }

#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
int main()
{
    int n;
    char s[1000010],temp[20];
    while(cin>>n)
    {
        getchar();
        gets(s);
        map<string,int>m;
        map<string,int>::iterator it;
        int ss=strlen(s);
        for(int i=0;i<=ss-n;i++)
        {
            strncpy(temp,s+i,n);
            temp[n]='\0';
            string sa="";
            sa+=temp;
            m[sa]++;
        }
        int mauya=-1;
        string stemp;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>mauya)
            {
                mauya=it->second;
                stemp=it->first;
            }
        }
        cout<<stemp<<endl;
    }
    return 0;
}

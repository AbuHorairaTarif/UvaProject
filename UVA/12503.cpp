#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    int i,n,t;
    int flag[150];
    char str[30];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int nn=0;
        for(int j=1;j<=n;j++)
        {
            cin>>str;
            if(str[0]=='L') flag[j]=-1;
            else if(str[0]=='R') flag[j]=1;
            else
            {
                cin>>str;
                cin>>str;
                int num,lon;
                lon=strlen(str);
                if(lon>=1)
                {
                    num=str[lon-1]-'0';
                    lon--;
                }
                if(lon>=1)
                {
                    num+=10*(str[lon-1]-'0');
                    lon--;
                }
                if(lon>=1)
                {
                    num+=100*(str[lon-1]-'0');
                    lon--;
                }
                flag[j]=flag[num];
            }
        }
        for(int j=1;j<=n;j++)
            nn+=flag[j];
        cout<<nn<<endl;
    }
    return 0;
}

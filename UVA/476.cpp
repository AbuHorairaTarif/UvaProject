#include <iostream>
using namespace std;
int main()
{
    double ar[10][4];
    int n=0,n2=0;
    char c;
    double x,y;
    bool f;
    while(1)
    {
        cin>>c;
        if(c=='*')
            break;
        if(c=='r')
        {
            cin>>ar[n][0]>>ar[n][1]>>ar[n][2]>>ar[n][3];
            n++;
        }
    }
    while(1)
    {
        cin>>x>>y;
        if(x==9999.9 && y==9999.9)
            break;
        n2++;
        f=false;
        for(int i=0;i<n;i++)
            if(x>ar[i][0] && x<ar[i][2] && y<ar[i][1] && y>ar[i][3])
        {
            cout<<"Point "<<n2<<" is contained in figure "<<i+1<<endl;
            f=true;
        }
        if(!f)
            cout<<"Point "<<n2<<" is not contained in any figure"<<endl;
    }
    return 0;
}

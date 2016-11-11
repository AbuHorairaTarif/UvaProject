#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    double sum=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        sum=0;
        if(str.length()==4)
            sum=(str[0]-'0')*0.5;
        else if(str.length()==5)
            sum=5;
        else if(str.length()==8)
            sum=(str[0]-'0')*0.5+(str[4]-'0')*0.05;
        else sum=5+(str[5]-'0')*0.05;

        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}

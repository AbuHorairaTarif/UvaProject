#include <iostream>
#include <string.h>
using namespace std;

int func(int n)
{
    if(n==1) return 1;
    return func(n/2)+1;
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<func(n)<<endl;
    }
    return 0;
}

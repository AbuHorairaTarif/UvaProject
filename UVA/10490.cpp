#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int data;
    int input;
    bool flag;
    int prime[] ={2,3,5,7,13,17,19,31};
    int notPerfect[]={11,23,29};
    while(cin>>input)
    {
        if(input==0) break;
        data=(pow(2,(input-1)))*((pow(2,input))-1);
        flag=false;

        for(int i=0;i<8;++i)
        {
            if(prime[i]==input)
            {
                cout<<"Perfect: "<<data<<"!"<<endl;
                flag = true;
            }
        }
        if(flag) continue;

        if(notPerfect[0]==input || notPerfect[1]==input || notPerfect[2]==input)
            cout<<"Given number is prime. But, NO perfect number is available."<<endl;
        else
        cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}

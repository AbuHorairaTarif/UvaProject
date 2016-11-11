#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
string a[20]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
int main()
{
    string b;
    int c,d,n,i,count=0,s;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d.",&d);
        cin>>b>>c;
        if(b=="pop")
            count=0;
        else if(b=="no")
            count=1;
        else if(b=="zip")
            count=2;
        else if(b=="zotz")
            count=3;
        else if(b=="tzec")
            count=4;
        else if(b=="xul")
            count=5;
        else if(b=="yoxkin")
            count=6;
        else if(b=="mol")
            count=7;
        else if(b=="chen")
            count=8;
        else if(b=="yax")
            count=9;
        else if(b=="zac")
            count=10;
        else if(b=="ceh")
            count=11;
        else if(b=="mac")
            count=12;
        else if(b=="kankin")
            count=13;
        else if(b=="muan")
            count=14;
        else if(b=="pax")
            count=15;
        else if(b=="koyab")
            count=16;
        else if(b=="cumhu")
            count=17;
        else
            count=18;
        s=d+count*20+c*365;

        cout<<s%13+1<<" "<<a[s%20]<<" "<<s/260<<endl;

    }
    return 0;
}

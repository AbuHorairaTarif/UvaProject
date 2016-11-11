#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
    string s1,s2;
    bool check,conti;
    long base1,base2,power,i,sum1,sum2;
    while(cin>>s1>>s2)
    {
        check=false;
        for(base1=2;base1<=36;base1++)
        {
            for(base2=2;base2<=36;base2++)
            {
            sum1=0;
            power=0;
            conti=false;

            for(i=s1.length()-1;i>=0;i--)
            {
                if(s1[i]>47 && s1[i]<58)
                {
                    sum1+=(s1[i]-48)*pow(base1,power++);
                    if(s1[i]-48>=base1)
                        conti=true;
                }
                else
                    {
                        sum1+=(s1[i]-55)*pow(base1,power++);
                    if(s1[i]-55>=base1)
                        conti=true;

                }

            }
 sum2=0;
            power=0;

            for(i=s2.length()-1;i>=0;i--)
            {
                if(s2[i]>47 && s2[i]<58)
                {
                    sum2+=(s2[i]-48)*pow(base2,power++);
                    if(s2[i]-48>=base2)
                        conti=true;
                }
                else {
                    sum2+=(s2[i]-55)*pow(base2,power++);
                    if(s2[i]-55>=base2)
                        conti=true;
                }
            }


      if(conti)
                continue;
            if(sum1==sum2)
            {
                check=true;
                cout<<s1<<" (base "<<base1<<") = "<<s2<<" (base "<<base2<<")"<<endl;
                break;
            }

        }
        if(check)
            break;

            }
            if(!check)
    {
        cout<<s1<<" is not equal to "<<s2<<" in any base 2..36"<<endl;
    }
    }

    return 0;
}

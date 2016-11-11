#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
string ss;

struct Bigint {
    string a; // to store the digits
    int sign; // sign =-1 for negative numbers,sign=1 otherwise
    Bigint(){} // default constructor
    Bigint(string b) {(*this)=b;} // constructor for string
    int size() //returns number of digits
    {
        return a.size;
    }
    Bigint inverseSign() //changes the sign
    {
        sign*=-1;
        return (*this);
    }
    Bigint normalize(int newSign) //removes leading 0,fixes sign
    {
        for(int i=a.size()-1;i>0 && a[i]=='0';i--)
            a.erase(a.begin()+i);
        sign=(a.size()==1 && a[0]=='0') ?:newSign;
        return (*this);
    }

    void operator = (string b) // assigns a string to Bigint
   {
       a=b[0]=='-'?b.substr(1):b;
       reverse(a.begin(),a.end());
       this->normalize(b[0]=='-'?-1:1);
   }
   bool operator < (const Bigint &b) const { //less than operator
   if(sign!=b.sign) return sign <b.sign;
   if(a.size()!=b.a.size())
        return sign ==1 ? a.size()<b.a.size():a.size()>b.a.size();
   for(int i=a.size()-1;i>=0;i--) if(a[i]!=b.a[i])
    return sign == 1 ? a[i]<b.a[i]:a[i]>b.a[i];
   return false;
   }

   bool operator == (const Bigint & b) const { //operator for equality
   return a==b.a && sign == b.sign;
   }

   Bigint operator + (Bigint b) { // addition operator overloading
    if(sign!=b.sign)return (*this)-b.inverseSign();
    Bigint c;

   }
};


#include <iostream>
#include<map>
#include<vector>
#include <algorithm>
using namespace std;

int main ()
{
    map<int,char>M;
    int n,i,j,l,d,a[100];
    char c[100];
    string s;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>s;
      l=s.size();
      for(j=0;j<l;j++)
      {
          d=s[j];
          if(d>64 && d<91)
          d=d*2;
          else
          d=131+2*(s[j]-97);
          M[d]=s[j];
          a[j]=d;
      }
      sort(a,a+l);


      do {
            for(j=0;j<l;j++)
            cout <<M[a[j]];
            cout<<endl;
        } while ( next_permutation (a,a+l) );
  }
return 0;
}

#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007




int main()
{
    string line,s;

    string word[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    int number[] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90 };
    while(getline(cin,line))
    {
        istringstream ss(line);
        //ss>>s;

        long long million=0,thousand=0,hundred=0,tmp=0;
        while(ss>>s)
        {
            for(int i=0;i<28;i++)
                if(s==word[i])
                {
                    tmp+=number[i];
                    break;
                }
                else if(s=="negative")
                {
                    cout<<"-";
                    break;
                }
                else if(s=="million")
                {
                    million=tmp*1000000;
                    tmp=0;
                    break;
                }
                else if(s=="thousand")
                {
                    thousand=tmp*1000;
                    tmp=0;
                    break;
                }
                else if(s=="hundred")
                {
                    tmp=tmp*100;
                    break;
                }
        }
        cout<<million+thousand+tmp<<endl;
    }
return 0;
}
